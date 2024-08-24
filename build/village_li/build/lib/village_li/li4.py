import rclpy #ros client library for python
from rclpy.node import Node #node class
# import published message type
from std_msgs.msg import String, UInt32 #import string message type
from village_interfaces.srv import BorrowMoney
 

"""
- import published message type
- declare and initialize the publisher
- design publisher logic
"""
"""
导入服务接口
创建服务端回调函数
声明并创建服务端
编写回调函数逻辑处理请求
"""



class writerNode(Node):
    def __init__(self, name):
        super().__init__(name)
        self.get_logger().info("node has been started: hello i am writer %s!"  % name)
        # declare and initialize the publisher
        self.pub_novel = self.create_publisher(String, "li4_novel", 10)

        # create a timer to publish the message
        self.timer_period = 5
        self.i = 1
        self.timer = self.create_timer(self.timer_period, self.timer_callback)

        self.account = 80

        self.sub_money = self.create_subscription(UInt32, "li4_novel_money", self.recv_money_callback, 10)

        self.borrow_server = self.create_service(BorrowMoney, "borrow_money", self.borrow_money_callback)

    def timer_callback(self):
        # design publisher logic
        msg = String()
        msg.data = "Section%d: this is the %d part of the novel published" % (self.i, self.i)
        
        # publish the message
        self.pub_novel.publish(msg)
        self.get_logger().info("Publishing: %s" % msg.data)
        self.i += 1
    
    def recv_money_callback(self, money):
        self.account += money.data
        self.get_logger().info("Received money: %d for publishing novel, now account is %d" % (money.data, self.account))

    def borrow_money_callback(self, request, response):
        # request
        self.get_logger().info("Received request to borrow money from: %s, current account balance is:%d" % (request.name, self.account))
        # generate response
        if request.money <= self.account * 0.1:
            response.success = True
            response.money = request.money
            self.account -= request.money
            self.get_logger().info("Borrowed money: %d, now account balance is %d" % (response.money, self.account))
        else:
            response.success = False
            response.money = 0
            self.get_logger().info("Failed to borrow money, current account balance is %d" % self.account)
        return response

def main(args=None):
    
    rclpy.init(args=args) #initialize the ros client library
    li4_node = writerNode("li4")
  # li4_node.get_logger().info("li4 node has been started")
    rclpy.spin(li4_node) #spin the node
    rclpy.shutdown() #shutdown the ros client library
