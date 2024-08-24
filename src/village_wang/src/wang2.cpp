#include "rclcpp/rclcpp.hpp"
// 1.import message type
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int32.hpp"
#include "village_interfaces/srv/sell_novel.hpp"
#include <queue>

using std::placeholders::_1;
using std::placeholders::_2;

class SingleDogNode: public rclcpp::Node
{
    private:
        // 3.declare subscriber
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr novel_sub;
        // 3. decalre publisher
        rclcpp::Publisher<std_msgs::msg::UInt32>::SharedPtr pub_money;

        std::queue<std::string> novels_queue;

        // declare callbackGroup
        rclcpp::CallbackGroup::SharedPtr sell_novel_callback_group;

        // declare service
        rclcpp::Service<village_interfaces::srv::SellNovel>::SharedPtr sell_server;

        // 2.declare call back function
        void novel_callback(const std_msgs::msg::String::SharedPtr novels)
        {   
            // 4. publisher call back function logic
            std_msgs::msg::UInt32 money;
            money.data = 10;
            pub_money->publish(money);
            RCLCPP_INFO(this->get_logger(), "i have sent 10$ to li4");

            novels_queue.push(novels->data);
            // 4. subscriber call back function logic
            RCLCPP_INFO(this->get_logger(), "i have received a novel: %s", novels->data.c_str());
    
        }

        // 2.declare call back function for sell_novel service
        void sell_novel_callback(const village_interfaces::srv::SellNovel::Request::SharedPtr request, 
        const village_interfaces::srv::SellNovel::Response::SharedPtr response){
            RCLCPP_INFO(this->get_logger(), "i received a sell novel request: total price is %d", request->money);

            unsigned int num = request->money*1;
            if(num > novels_queue.size()){
                RCLCPP_INFO(this->get_logger(), "currently have %d novels in the queue, less than the requested amout%d", (int)novels_queue.size(), num);

                rclcpp::Rate rate(1);

                while((int)novels_queue.size() < (int)num){
                    if (!rclcpp::ok()) {
                        RCLCPP_WARN(this->get_logger(), "Shutting down, exiting loop...");
                        return;
                    }
                    RCLCPP_WARN(this->get_logger(), "currently have %d novels in the queue, less than the requested amout%d", (int)novels_queue.size(), num);

                    RCLCPP_INFO(this->get_logger(), "waiting for more novels coming, now need %d novels", (int)(num - novels_queue.size()));
                    // rclcpp::rate to control the frequency of the while loop
                    rate.sleep();

                }
            
            }
            RCLCPP_INFO(this->get_logger(), "currently have %d novels in the queue, greater than the requested amout%d", (int)novels_queue.size(), num);

            for(int i = 0; i < (int)num; i++){
                response->novels.push_back(novels_queue.front());
                novels_queue.pop();
            }
            return;
        }



    public:
        SingleDogNode(std::string name): Node(name)
        {
            RCLCPP_INFO(this->get_logger(), "Hello this is %s!", name.c_str());
            // create a subscriber
            novel_sub = this->create_subscription<std_msgs::msg::String>(
                "li4_novel", 10, std::bind(&SingleDogNode::novel_callback, this, std::placeholders::_1));
            // create a publisher
            pub_money = this->create_publisher<std_msgs::msg::UInt32>("li4_novel_money", 10);

            sell_novel_callback_group = this->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);

            sell_server = this->create_service<village_interfaces::srv::SellNovel>(
                "sell_novel", 
                std::bind(&SingleDogNode::sell_novel_callback, this, _1, _2), 10, sell_novel_callback_group);


            
        }

};




int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SingleDogNode>("wang2");
    // devalare a executor for multi-threaded
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(node);
    executor.spin();
    // rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}