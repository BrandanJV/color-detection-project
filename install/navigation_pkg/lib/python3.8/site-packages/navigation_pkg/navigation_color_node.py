import rclpy

from deepracer_interfaces_pkg.msg import ServoCtrlMsg
from rclpy.node import Node
from vision_interfaces_pkg.msg import ColorFlag

class NavigationNode(Node):
	def __init__(self):
		super().__init__('navigation_node')
		self.get_logger().info("navigation node started \n")
		
		#Topic subscriber to detect whether to move on or stop
		self.signal_detection_client = self.create_subscription(
									ColorFlag,
									"topic",
									self.detection_callback,
									10
									)
		
		#Topic publisher of move on or stop message
		self.navigation_publisher = self.create_publisher(
								ServoCtrlMsg,
								'ctrl_pkg/servo_msg',
								10
								)
								
		self.timer_period = 0.5
		self.timer = self.create_timer(self.timer_period, self.timer_callback)
		self.angle = 0.0
		self.throttle = 0.0
		
	def detection_callback(self, msg):
		if msg.greenflag == True:
			self.throttle = 0.6
			self.angle = 0.0
		elif msg.yellowflag == True:
			self.throttle = 0.4
			self.angle = 0.0
		elif msg.redflag == True:
			self.throttle = 0.0
			self.angle = 0.0
		else:
			self.throttle = 0.5
			self.angle = 0.0
	
	def timer_callback(self):
		msg = ServoCtrlMsg()
		msg.throttle = self.throttle
		msg.angle = self.angle
		self.navigation_publisher.publish(msg)
		self.get_logger().info("---------\n")
		self.get_logger().info('throttle is: "%s"' %msg.throttle)
		self.get_logger().info('angle is: "%s"' %msg.angle)
		self.get_logger().info("---------\n")


def main(args = None):
	rclpy.init(args = args)
	nav_pub = NavigationNode()
	rclpy.spin(nav_pub)
	
	nav_pub.destroy_node()
	rclpy.shutdown()
	
	
if __name__ == '__main__':
	main()
