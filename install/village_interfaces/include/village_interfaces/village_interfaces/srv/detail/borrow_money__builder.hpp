// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from village_interfaces:srv/BorrowMoney.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__SRV__DETAIL__BORROW_MONEY__BUILDER_HPP_
#define VILLAGE_INTERFACES__SRV__DETAIL__BORROW_MONEY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "village_interfaces/srv/detail/borrow_money__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace village_interfaces
{

namespace srv
{

namespace builder
{

class Init_BorrowMoney_Request_money
{
public:
  explicit Init_BorrowMoney_Request_money(::village_interfaces::srv::BorrowMoney_Request & msg)
  : msg_(msg)
  {}
  ::village_interfaces::srv::BorrowMoney_Request money(::village_interfaces::srv::BorrowMoney_Request::_money_type arg)
  {
    msg_.money = std::move(arg);
    return std::move(msg_);
  }

private:
  ::village_interfaces::srv::BorrowMoney_Request msg_;
};

class Init_BorrowMoney_Request_name
{
public:
  Init_BorrowMoney_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BorrowMoney_Request_money name(::village_interfaces::srv::BorrowMoney_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_BorrowMoney_Request_money(msg_);
  }

private:
  ::village_interfaces::srv::BorrowMoney_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::village_interfaces::srv::BorrowMoney_Request>()
{
  return village_interfaces::srv::builder::Init_BorrowMoney_Request_name();
}

}  // namespace village_interfaces


namespace village_interfaces
{

namespace srv
{

namespace builder
{

class Init_BorrowMoney_Response_money
{
public:
  explicit Init_BorrowMoney_Response_money(::village_interfaces::srv::BorrowMoney_Response & msg)
  : msg_(msg)
  {}
  ::village_interfaces::srv::BorrowMoney_Response money(::village_interfaces::srv::BorrowMoney_Response::_money_type arg)
  {
    msg_.money = std::move(arg);
    return std::move(msg_);
  }

private:
  ::village_interfaces::srv::BorrowMoney_Response msg_;
};

class Init_BorrowMoney_Response_success
{
public:
  Init_BorrowMoney_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BorrowMoney_Response_money success(::village_interfaces::srv::BorrowMoney_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_BorrowMoney_Response_money(msg_);
  }

private:
  ::village_interfaces::srv::BorrowMoney_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::village_interfaces::srv::BorrowMoney_Response>()
{
  return village_interfaces::srv::builder::Init_BorrowMoney_Response_success();
}

}  // namespace village_interfaces


namespace village_interfaces
{

namespace srv
{

namespace builder
{

class Init_BorrowMoney_Event_response
{
public:
  explicit Init_BorrowMoney_Event_response(::village_interfaces::srv::BorrowMoney_Event & msg)
  : msg_(msg)
  {}
  ::village_interfaces::srv::BorrowMoney_Event response(::village_interfaces::srv::BorrowMoney_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::village_interfaces::srv::BorrowMoney_Event msg_;
};

class Init_BorrowMoney_Event_request
{
public:
  explicit Init_BorrowMoney_Event_request(::village_interfaces::srv::BorrowMoney_Event & msg)
  : msg_(msg)
  {}
  Init_BorrowMoney_Event_response request(::village_interfaces::srv::BorrowMoney_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_BorrowMoney_Event_response(msg_);
  }

private:
  ::village_interfaces::srv::BorrowMoney_Event msg_;
};

class Init_BorrowMoney_Event_info
{
public:
  Init_BorrowMoney_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BorrowMoney_Event_request info(::village_interfaces::srv::BorrowMoney_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_BorrowMoney_Event_request(msg_);
  }

private:
  ::village_interfaces::srv::BorrowMoney_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::village_interfaces::srv::BorrowMoney_Event>()
{
  return village_interfaces::srv::builder::Init_BorrowMoney_Event_info();
}

}  // namespace village_interfaces

#endif  // VILLAGE_INTERFACES__SRV__DETAIL__BORROW_MONEY__BUILDER_HPP_
