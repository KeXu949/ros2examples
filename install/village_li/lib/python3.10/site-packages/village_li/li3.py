import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from village_interfaces.srv import BorrowMoney

"""
导入服务接口
创建请求结果接收回调函数
声明并创建客户端
编写结果接收逻辑
调用客户端发送请求
"""

class freeViewerNode(Node):
    def __init__(self, name):
        super().__init__(name)
        self.get_logger().info("free viewer node has been started: hello i am free viewer %s!"  % name)
        self.sub_novel = self.create_subscription(String, "li4_novel", self.recv_novel_callback, 10)

        self.borrow_client = self.create_client(BorrowMoney, "borrow_money")
    
    def recv_novel_callback(self, msg):
        self.get_logger().info("Received with no cost: %s" % msg.data)

    
    def borrow_response_callback(self, response):
        result = response.result()
        if result.success:
            self.get_logger().info("Borrowed %d$ successfully" % result.money)
        else:
            self.get_logger().info("Borrowed failed")
    
    def borrow_money(self, money = 10):
        self.get_logger().info("Request to borrow %d$" % money)
        # make sure the service is available
        while not self.borrow_client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for borrow money service to be available...")
        # create request
        request = BorrowMoney.Request()
        request.name = self.get_name()
        request.money = money

        # send async request
        self.borrow_client.call_async(request).add_done_callback(self.borrow_response_callback) # when we get the response, we will call the callback function


def main(args=None):
    rclpy.init(args=args)
    free_viewer_node = freeViewerNode("li3")
    
    # send request to borrow money every 5 seconds
    free_viewer_node.create_timer(5, lambda: free_viewer_node.borrow_money())

    #free_viewer_node.borrow_money()

    rclpy.spin(free_viewer_node)
    rclpy.shutdown()