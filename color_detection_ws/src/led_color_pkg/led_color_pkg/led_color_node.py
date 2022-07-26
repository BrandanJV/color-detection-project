import rclpy

from rclpy.node import Node
from color_interfaces.msg import ColorFlag
from deepracer_interfaces_pkg.srv import SetLedCtrlSrv

class LedColorNode(Node):
	def __init__(self):
		super().__init__('led_color_node')
		self.get_logger().info("led_color_node started. \n")
		
		#Subscriber of color detected flag topic
		self.color_flag_sub = self.create_subscription(
								ColorFlag, 
								'topic',
								self.listener_callback, 
								10
								)
		
		#Service to dynamically set LED Color
		self.set_led_ctrl_client = self.create_client(SetLedCtrlSrv,
								"servo_pkg/set_led_state")
								
		while not self.set_led_ctrl_client.wait_for_service(timeout_sec = 1.0):
			self.get_logger().info(
				f"{self.set_led_ctrl_client.srv_name} service not available, waiting again..."
				)
		self.led_scaling_factor = 39215
				
	def listener_callback(self, msg):
		set_led_color_req = SetLedCtrlSrv.Request()
		if msg.greenflag == True:
			self.get_logger().info("Setting leds tail light green. \n")
			set_led_color_req = SetLedCtrlSrv.Request()
			set_led_color_req.green = 255 * self.led_scaling_factor
			self.set_led_ctrl_client.call_async(set_led_color_req)
		elif msg.yellowflag == True:
			self.get_logger().info("Setting leds tail light white. \n")
			set_led_color_req = SetLedCtrlSrv.Request()
			set_led_color_req.red = 255 * self.led_scaling_factor
			set_led_color_req.green = 255 * self.led_scaling_factor
			set_led_color_req.blue = 255 * self.led_scaling_factor
			self.set_led_ctrl_client.call_async(set_led_color_req)
		elif msg.redflag == True:
			self.get_logger().info("Setting leds tail light red.\n")
			set_led_color_req = SetLedCtrlSrv.Request()
			set_led_color_req.red = 255 * self.led_scaling_factor
			self.set_led_ctrl_client.call_async(set_led_color_req)
		else:
			self.get_logger().info("Turning off leds tail light. \n")
			set_led_color_req = SetLedCtrlSrv.Request()
			set_led_color_req.red = 0 * self.led_scaling_factor
			set_led_color_req.green = 0 * self.led_scaling_factor
			set_led_color_req.blue = 0 * self.led_scaling_factor
			self.set_led_ctrl_client.call_async(set_led_color_req)
				
def main(args=None):
	rclpy.init(args=args)
	colorflag_sub = LedColorNode()
	rclpy.spin(colorflag_sub)
	
	colorflag_sub.destroy_node()
	rclpy.shutdown()
	
if __name__ == '__main__':
	main()
					
			
