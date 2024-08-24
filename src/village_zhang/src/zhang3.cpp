#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int32.hpp"
#include "village_interfaces/srv/sell_novel.hpp"
#include <queue>

using std::placeholders::_1;
using std::placeholders::_2;

class PoorManNode: public rclcpp::Node
{
    private:
    rclcpp::Client<village_interfaces::srv::SellNovel>::SharedPtr buy_novel_client;


   

    void buy_novels_callback(rclcpp::Client<village_interfaces::srv::SellNovel>::SharedFuture response){

        auto result = response.get();

        RCLCPP_INFO(this->get_logger(), "i received %d novels", (int)result->novels.size());

        for(std::string novel : result->novels){
            RCLCPP_INFO(this->get_logger(), "i received a novel: %s", novel.c_str());
        }

        RCLCPP_INFO(this->get_logger(), "finished reading novels");
    

    }


    public:

    PoorManNode(std::string name) : Node(name)
    {
        RCLCPP_INFO(this->get_logger(), "hello, this is poor man zhang3!");

        buy_novel_client = this->create_client<village_interfaces::srv::SellNovel>("sell_novel");
    }

     void buy_novel(){
        RCLCPP_INFO(this->get_logger(), "i want to buy a cheap novel");

        while(!buy_novel_client->wait_for_service(std::chrono::seconds(1))){
            if(!rclcpp::ok()){
                RCLCPP_ERROR(this->get_logger(), "client interrupted while waiting for service");
                return;
            }
            RCLCPP_WARN(this->get_logger(), "service not available, waiting again...");
        }

        auto request = std::make_shared<village_interfaces::srv::SellNovel::Request>();

        request->money = 5;

        // send async request, then call callback function when get response
        buy_novel_client->async_send_request(request, std::bind(&PoorManNode::buy_novels_callback, this, std::placeholders::_1));
    }

    

};

int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PoorManNode>("zhang3");
    node->buy_novel();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

