import cv2 
import rclpy

import numpy as np

from rclpy.node import Node
from sensor_msgs.msg import Image
from vision_interfaces_pkg.msg import ColorFlag
from cv_bridge import CvBridge, CvBridgeError

class VideoFilterNode(Node):
	def __init__(self):
		super().__init__('video_filter_node')
		self.get_logger().info("video_filter_node started.")
		
		#topic subscriber of Image msg from camera
		self.image_subscriber = self.create_subscription(
								Image, 
								"camera_pkg/display_mjpeg",
								self.image_callback,
								10
								)	
								
		#topic publisher of applied mask to video       capturing							
		self.color_flag_publisher = self.create_publisher(
								ColorFlag, 
								'topic',
								10
								)
								
		timer_period = 0.5
		self.timer = self.create_timer(timer_period, self.timer_callback)	
				
		self.bridge = CvBridge()
		self.greenColorFlag = False
		self.yellowColorFlag = False
		self.redColorFlag = False
		self.lowGreen = np.array([36, 100, 20], np.uint8)
		self.highGreen = np.array([70, 255, 255], np.uint8)
		self.lowYellow = np.array([20, 100, 20], np.uint8)
		self.highYellow = np.array([32, 255, 255], np.uint8)
		self.lowRed = np.array([0, 100, 20], np.uint8)
		self.highRed = np.array([10, 255, 255], np.uint8)
		self.led_scaling_factor = 39215
		
		
										
	def image_callback(self, msg):
		try:
			cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
		except CvBridgeError as e:
			print(e)
		
		height, width, channels = cv_image.shape
		HSVframe = cv2.cvtColor(cv_image, cv2.COLOR_BGR2HSV)
		greenMask = cv2.inRange(HSVframe, self.lowGreen, self.highGreen)
		yellowMask = cv2.inRange(HSVframe, self.lowYellow, self.highYellow)
		redMask = cv2.inRange(HSVframe, self.lowRed, self.highYellow)
		
		greenOnes = cv2.countNonZero(greenMask)
		yellowOnes = cv2.countNonZero(yellowMask)
		redOnes = cv2.countNonZero(redMask)
		percent_GreenColor = greenOnes/(height*width) * 100
		percent_YellowColor = yellowOnes/(height*width) * 100
		percent_RedColor = redOnes/(height*width) * 100
		
		if percent_GreenColor > 10:
			self.greenColorFlag = True
			self.yellowColorFlag = False
			self.redColorFlag = False
		#else:
		#	self.greenColorFlag = False
			
		if percent_YellowColor > 10:
			self.yellowColorFlag = True
			self.greenColorFlag = False
			self.redColorFlag = False
		#else:
		#	self.yellowColorFlag = False
			
		if percent_RedColor > 10:
			self.redColorFlag = True
			self.greenColorFlag = False
			self.yellowColorFlag = False
		#else:
		#	self.redColorFlag = False
		
	def timer_callback(self):
		msg = ColorFlag()
		msg.greenflag = self.greenColorFlag
		msg.yellowflag = self.yellowColorFlag
		msg.redflag = self.redColorFlag
		self.color_flag_publisher.publish(msg)
		self.get_logger().info('Green flag is "%s"' % msg.greenflag)
		self.get_logger().info('Yellow flag is "%s"' % msg.yellowflag)
		self.get_logger().info('Red flag is "%s" \n' % msg.redflag)
		
		
def main(args=None):
	rclpy.init(args=args)
	image_subscriber = VideoFilterNode()
	rclpy.spin(image_subscriber)
	
	image_subscriber.destroy_node()
	rclpy.shutdown()
	
if __name__ == '__main__':
	main()
