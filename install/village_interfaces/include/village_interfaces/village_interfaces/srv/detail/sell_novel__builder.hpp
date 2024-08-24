// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from village_interfaces:srv/SellNovel.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__SRV__DETAIL__SELL_NOVEL__BUILDER_HPP_
#define VILLAGE_INTERFACES__SRV__DETAIL__SELL_NOVEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "village_interfaces/srv/detail/sell_novel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace village_interfaces
{

namespace srv
{

namespace builder
{

class Init_SellNovel_Request_money
{
public:
  Init_SellNovel_Request_money()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::village_interfaces::srv::SellNovel_Request money(::village_interfaces::srv::SellNovel_Request::_money_type arg)
  {
    msg_.money = std::move(arg);
    return std::move(msg_);
  }

private:
  ::village_interfaces::srv::SellNovel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::village_interfaces::srv::SellNovel_Request>()
{
  return village_interfaces::srv::builder::Init_SellNovel_Request_money();
}

}  // namespace village_interfaces


namespace village_interfaces
{

namespace srv
{

namespace builder
{

class Init_SellNovel_Response_novels
{
public:
  Init_SellNovel_Response_novels()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::village_interfaces::srv::SellNovel_Response novels(::village_interfaces::srv::SellNovel_Response::_novels_type arg)
  {
    msg_.novels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::village_interfaces::srv::SellNovel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::village_interfaces::srv::SellNovel_Response>()
{
  return village_interfaces::srv::builder::Init_SellNovel_Response_novels();
}

}  // namespace village_interfaces


namespace village_interfaces
{

namespace srv
{

namespace builder
{

class Init_SellNovel_Event_response
{
public:
  explicit Init_SellNovel_Event_response(::village_interfaces::srv::SellNovel_Event & msg)
  : msg_(msg)
  {}
  ::village_interfaces::srv::SellNovel_Event response(::village_interfaces::srv::SellNovel_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::village_interfaces::srv::SellNovel_Event msg_;
};

class Init_SellNovel_Event_request
{
public:
  explicit Init_SellNovel_Event_request(::village_interfaces::srv::SellNovel_Event & msg)
  : msg_(msg)
  {}
  Init_SellNovel_Event_response request(::village_interfaces::srv::SellNovel_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SellNovel_Event_response(msg_);
  }

private:
  ::village_interfaces::srv::SellNovel_Event msg_;
};

class Init_SellNovel_Event_info
{
public:
  Init_SellNovel_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SellNovel_Event_request info(::village_interfaces::srv::SellNovel_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SellNovel_Event_request(msg_);
  }

private:
  ::village_interfaces::srv::SellNovel_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::village_interfaces::srv::SellNovel_Event>()
{
  return village_interfaces::srv::builder::Init_SellNovel_Event_info();
}

}  // namespace village_interfaces

#endif  // VILLAGE_INTERFACES__SRV__DETAIL__SELL_NOVEL__BUILDER_HPP_
