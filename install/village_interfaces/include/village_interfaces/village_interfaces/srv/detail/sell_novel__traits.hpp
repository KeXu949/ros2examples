// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from village_interfaces:srv/SellNovel.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__SRV__DETAIL__SELL_NOVEL__TRAITS_HPP_
#define VILLAGE_INTERFACES__SRV__DETAIL__SELL_NOVEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "village_interfaces/srv/detail/sell_novel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace village_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SellNovel_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: money
  {
    out << "money: ";
    rosidl_generator_traits::value_to_yaml(msg.money, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SellNovel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: money
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "money: ";
    rosidl_generator_traits::value_to_yaml(msg.money, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SellNovel_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace village_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use village_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const village_interfaces::srv::SellNovel_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  village_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use village_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const village_interfaces::srv::SellNovel_Request & msg)
{
  return village_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<village_interfaces::srv::SellNovel_Request>()
{
  return "village_interfaces::srv::SellNovel_Request";
}

template<>
inline const char * name<village_interfaces::srv::SellNovel_Request>()
{
  return "village_interfaces/srv/SellNovel_Request";
}

template<>
struct has_fixed_size<village_interfaces::srv::SellNovel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<village_interfaces::srv::SellNovel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<village_interfaces::srv::SellNovel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace village_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SellNovel_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: novels
  {
    if (msg.novels.size() == 0) {
      out << "novels: []";
    } else {
      out << "novels: [";
      size_t pending_items = msg.novels.size();
      for (auto item : msg.novels) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SellNovel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: novels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.novels.size() == 0) {
      out << "novels: []\n";
    } else {
      out << "novels:\n";
      for (auto item : msg.novels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SellNovel_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace village_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use village_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const village_interfaces::srv::SellNovel_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  village_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use village_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const village_interfaces::srv::SellNovel_Response & msg)
{
  return village_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<village_interfaces::srv::SellNovel_Response>()
{
  return "village_interfaces::srv::SellNovel_Response";
}

template<>
inline const char * name<village_interfaces::srv::SellNovel_Response>()
{
  return "village_interfaces/srv/SellNovel_Response";
}

template<>
struct has_fixed_size<village_interfaces::srv::SellNovel_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<village_interfaces::srv::SellNovel_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<village_interfaces::srv::SellNovel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace village_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SellNovel_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SellNovel_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SellNovel_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace village_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use village_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const village_interfaces::srv::SellNovel_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  village_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use village_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const village_interfaces::srv::SellNovel_Event & msg)
{
  return village_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<village_interfaces::srv::SellNovel_Event>()
{
  return "village_interfaces::srv::SellNovel_Event";
}

template<>
inline const char * name<village_interfaces::srv::SellNovel_Event>()
{
  return "village_interfaces/srv/SellNovel_Event";
}

template<>
struct has_fixed_size<village_interfaces::srv::SellNovel_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<village_interfaces::srv::SellNovel_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<village_interfaces::srv::SellNovel_Request>::value && has_bounded_size<village_interfaces::srv::SellNovel_Response>::value> {};

template<>
struct is_message<village_interfaces::srv::SellNovel_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<village_interfaces::srv::SellNovel>()
{
  return "village_interfaces::srv::SellNovel";
}

template<>
inline const char * name<village_interfaces::srv::SellNovel>()
{
  return "village_interfaces/srv/SellNovel";
}

template<>
struct has_fixed_size<village_interfaces::srv::SellNovel>
  : std::integral_constant<
    bool,
    has_fixed_size<village_interfaces::srv::SellNovel_Request>::value &&
    has_fixed_size<village_interfaces::srv::SellNovel_Response>::value
  >
{
};

template<>
struct has_bounded_size<village_interfaces::srv::SellNovel>
  : std::integral_constant<
    bool,
    has_bounded_size<village_interfaces::srv::SellNovel_Request>::value &&
    has_bounded_size<village_interfaces::srv::SellNovel_Response>::value
  >
{
};

template<>
struct is_service<village_interfaces::srv::SellNovel>
  : std::true_type
{
};

template<>
struct is_service_request<village_interfaces::srv::SellNovel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<village_interfaces::srv::SellNovel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VILLAGE_INTERFACES__SRV__DETAIL__SELL_NOVEL__TRAITS_HPP_
