// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from village_interfaces:srv/SellNovel.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "village_interfaces/srv/detail/sell_novel__functions.h"
#include "village_interfaces/srv/detail/sell_novel__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace village_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SellNovel_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SellNovel_Request_type_support_ids_t;

static const _SellNovel_Request_type_support_ids_t _SellNovel_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SellNovel_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SellNovel_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SellNovel_Request_type_support_symbol_names_t _SellNovel_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, village_interfaces, srv, SellNovel_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, village_interfaces, srv, SellNovel_Request)),
  }
};

typedef struct _SellNovel_Request_type_support_data_t
{
  void * data[2];
} _SellNovel_Request_type_support_data_t;

static _SellNovel_Request_type_support_data_t _SellNovel_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SellNovel_Request_message_typesupport_map = {
  2,
  "village_interfaces",
  &_SellNovel_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SellNovel_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SellNovel_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SellNovel_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SellNovel_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &village_interfaces__srv__SellNovel_Request__get_type_hash,
  &village_interfaces__srv__SellNovel_Request__get_type_description,
  &village_interfaces__srv__SellNovel_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace village_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<village_interfaces::srv::SellNovel_Request>()
{
  return &::village_interfaces::srv::rosidl_typesupport_cpp::SellNovel_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, village_interfaces, srv, SellNovel_Request)() {
  return get_message_type_support_handle<village_interfaces::srv::SellNovel_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "village_interfaces/srv/detail/sell_novel__functions.h"
// already included above
// #include "village_interfaces/srv/detail/sell_novel__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace village_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SellNovel_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SellNovel_Response_type_support_ids_t;

static const _SellNovel_Response_type_support_ids_t _SellNovel_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SellNovel_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SellNovel_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SellNovel_Response_type_support_symbol_names_t _SellNovel_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, village_interfaces, srv, SellNovel_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, village_interfaces, srv, SellNovel_Response)),
  }
};

typedef struct _SellNovel_Response_type_support_data_t
{
  void * data[2];
} _SellNovel_Response_type_support_data_t;

static _SellNovel_Response_type_support_data_t _SellNovel_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SellNovel_Response_message_typesupport_map = {
  2,
  "village_interfaces",
  &_SellNovel_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SellNovel_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SellNovel_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SellNovel_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SellNovel_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &village_interfaces__srv__SellNovel_Response__get_type_hash,
  &village_interfaces__srv__SellNovel_Response__get_type_description,
  &village_interfaces__srv__SellNovel_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace village_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<village_interfaces::srv::SellNovel_Response>()
{
  return &::village_interfaces::srv::rosidl_typesupport_cpp::SellNovel_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, village_interfaces, srv, SellNovel_Response)() {
  return get_message_type_support_handle<village_interfaces::srv::SellNovel_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "village_interfaces/srv/detail/sell_novel__functions.h"
// already included above
// #include "village_interfaces/srv/detail/sell_novel__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace village_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SellNovel_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SellNovel_Event_type_support_ids_t;

static const _SellNovel_Event_type_support_ids_t _SellNovel_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SellNovel_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SellNovel_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SellNovel_Event_type_support_symbol_names_t _SellNovel_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, village_interfaces, srv, SellNovel_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, village_interfaces, srv, SellNovel_Event)),
  }
};

typedef struct _SellNovel_Event_type_support_data_t
{
  void * data[2];
} _SellNovel_Event_type_support_data_t;

static _SellNovel_Event_type_support_data_t _SellNovel_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SellNovel_Event_message_typesupport_map = {
  2,
  "village_interfaces",
  &_SellNovel_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SellNovel_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SellNovel_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SellNovel_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SellNovel_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &village_interfaces__srv__SellNovel_Event__get_type_hash,
  &village_interfaces__srv__SellNovel_Event__get_type_description,
  &village_interfaces__srv__SellNovel_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace village_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<village_interfaces::srv::SellNovel_Event>()
{
  return &::village_interfaces::srv::rosidl_typesupport_cpp::SellNovel_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, village_interfaces, srv, SellNovel_Event)() {
  return get_message_type_support_handle<village_interfaces::srv::SellNovel_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "village_interfaces/srv/detail/sell_novel__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace village_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SellNovel_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SellNovel_type_support_ids_t;

static const _SellNovel_type_support_ids_t _SellNovel_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SellNovel_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SellNovel_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SellNovel_type_support_symbol_names_t _SellNovel_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, village_interfaces, srv, SellNovel)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, village_interfaces, srv, SellNovel)),
  }
};

typedef struct _SellNovel_type_support_data_t
{
  void * data[2];
} _SellNovel_type_support_data_t;

static _SellNovel_type_support_data_t _SellNovel_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SellNovel_service_typesupport_map = {
  2,
  "village_interfaces",
  &_SellNovel_service_typesupport_ids.typesupport_identifier[0],
  &_SellNovel_service_typesupport_symbol_names.symbol_name[0],
  &_SellNovel_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SellNovel_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SellNovel_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<village_interfaces::srv::SellNovel_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<village_interfaces::srv::SellNovel_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<village_interfaces::srv::SellNovel_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<village_interfaces::srv::SellNovel>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<village_interfaces::srv::SellNovel>,
  &village_interfaces__srv__SellNovel__get_type_hash,
  &village_interfaces__srv__SellNovel__get_type_description,
  &village_interfaces__srv__SellNovel__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace village_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<village_interfaces::srv::SellNovel>()
{
  return &::village_interfaces::srv::rosidl_typesupport_cpp::SellNovel_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
