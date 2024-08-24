// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from village_interfaces:srv/BorrowMoney.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "village_interfaces/srv/detail/borrow_money__rosidl_typesupport_introspection_c.h"
#include "village_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "village_interfaces/srv/detail/borrow_money__functions.h"
#include "village_interfaces/srv/detail/borrow_money__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  village_interfaces__srv__BorrowMoney_Request__init(message_memory);
}

void village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_fini_function(void * message_memory)
{
  village_interfaces__srv__BorrowMoney_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces__srv__BorrowMoney_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "money",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces__srv__BorrowMoney_Request, money),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_message_members = {
  "village_interfaces__srv",  // message namespace
  "BorrowMoney_Request",  // message name
  2,  // number of fields
  sizeof(village_interfaces__srv__BorrowMoney_Request),
  village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_message_member_array,  // message members
  village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_message_type_support_handle = {
  0,
  &village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_message_members,
  get_message_typesupport_handle_function,
  &village_interfaces__srv__BorrowMoney_Request__get_type_hash,
  &village_interfaces__srv__BorrowMoney_Request__get_type_description,
  &village_interfaces__srv__BorrowMoney_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_village_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, BorrowMoney_Request)() {
  if (!village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_message_type_support_handle.typesupport_identifier) {
    village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "village_interfaces/srv/detail/borrow_money__rosidl_typesupport_introspection_c.h"
// already included above
// #include "village_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "village_interfaces/srv/detail/borrow_money__functions.h"
// already included above
// #include "village_interfaces/srv/detail/borrow_money__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  village_interfaces__srv__BorrowMoney_Response__init(message_memory);
}

void village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_fini_function(void * message_memory)
{
  village_interfaces__srv__BorrowMoney_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces__srv__BorrowMoney_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "money",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces__srv__BorrowMoney_Response, money),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_message_members = {
  "village_interfaces__srv",  // message namespace
  "BorrowMoney_Response",  // message name
  2,  // number of fields
  sizeof(village_interfaces__srv__BorrowMoney_Response),
  village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_message_member_array,  // message members
  village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_message_type_support_handle = {
  0,
  &village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_message_members,
  get_message_typesupport_handle_function,
  &village_interfaces__srv__BorrowMoney_Response__get_type_hash,
  &village_interfaces__srv__BorrowMoney_Response__get_type_description,
  &village_interfaces__srv__BorrowMoney_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_village_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, BorrowMoney_Response)() {
  if (!village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_message_type_support_handle.typesupport_identifier) {
    village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "village_interfaces/srv/detail/borrow_money__rosidl_typesupport_introspection_c.h"
// already included above
// #include "village_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "village_interfaces/srv/detail/borrow_money__functions.h"
// already included above
// #include "village_interfaces/srv/detail/borrow_money__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "village_interfaces/srv/borrow_money.h"
// Member `request`
// Member `response`
// already included above
// #include "village_interfaces/srv/detail/borrow_money__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  village_interfaces__srv__BorrowMoney_Event__init(message_memory);
}

void village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_fini_function(void * message_memory)
{
  village_interfaces__srv__BorrowMoney_Event__fini(message_memory);
}

size_t village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__size_function__BorrowMoney_Event__request(
  const void * untyped_member)
{
  const village_interfaces__srv__BorrowMoney_Request__Sequence * member =
    (const village_interfaces__srv__BorrowMoney_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__get_const_function__BorrowMoney_Event__request(
  const void * untyped_member, size_t index)
{
  const village_interfaces__srv__BorrowMoney_Request__Sequence * member =
    (const village_interfaces__srv__BorrowMoney_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__get_function__BorrowMoney_Event__request(
  void * untyped_member, size_t index)
{
  village_interfaces__srv__BorrowMoney_Request__Sequence * member =
    (village_interfaces__srv__BorrowMoney_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__fetch_function__BorrowMoney_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const village_interfaces__srv__BorrowMoney_Request * item =
    ((const village_interfaces__srv__BorrowMoney_Request *)
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__get_const_function__BorrowMoney_Event__request(untyped_member, index));
  village_interfaces__srv__BorrowMoney_Request * value =
    (village_interfaces__srv__BorrowMoney_Request *)(untyped_value);
  *value = *item;
}

void village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__assign_function__BorrowMoney_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  village_interfaces__srv__BorrowMoney_Request * item =
    ((village_interfaces__srv__BorrowMoney_Request *)
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__get_function__BorrowMoney_Event__request(untyped_member, index));
  const village_interfaces__srv__BorrowMoney_Request * value =
    (const village_interfaces__srv__BorrowMoney_Request *)(untyped_value);
  *item = *value;
}

bool village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__resize_function__BorrowMoney_Event__request(
  void * untyped_member, size_t size)
{
  village_interfaces__srv__BorrowMoney_Request__Sequence * member =
    (village_interfaces__srv__BorrowMoney_Request__Sequence *)(untyped_member);
  village_interfaces__srv__BorrowMoney_Request__Sequence__fini(member);
  return village_interfaces__srv__BorrowMoney_Request__Sequence__init(member, size);
}

size_t village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__size_function__BorrowMoney_Event__response(
  const void * untyped_member)
{
  const village_interfaces__srv__BorrowMoney_Response__Sequence * member =
    (const village_interfaces__srv__BorrowMoney_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__get_const_function__BorrowMoney_Event__response(
  const void * untyped_member, size_t index)
{
  const village_interfaces__srv__BorrowMoney_Response__Sequence * member =
    (const village_interfaces__srv__BorrowMoney_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__get_function__BorrowMoney_Event__response(
  void * untyped_member, size_t index)
{
  village_interfaces__srv__BorrowMoney_Response__Sequence * member =
    (village_interfaces__srv__BorrowMoney_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__fetch_function__BorrowMoney_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const village_interfaces__srv__BorrowMoney_Response * item =
    ((const village_interfaces__srv__BorrowMoney_Response *)
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__get_const_function__BorrowMoney_Event__response(untyped_member, index));
  village_interfaces__srv__BorrowMoney_Response * value =
    (village_interfaces__srv__BorrowMoney_Response *)(untyped_value);
  *value = *item;
}

void village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__assign_function__BorrowMoney_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  village_interfaces__srv__BorrowMoney_Response * item =
    ((village_interfaces__srv__BorrowMoney_Response *)
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__get_function__BorrowMoney_Event__response(untyped_member, index));
  const village_interfaces__srv__BorrowMoney_Response * value =
    (const village_interfaces__srv__BorrowMoney_Response *)(untyped_value);
  *item = *value;
}

bool village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__resize_function__BorrowMoney_Event__response(
  void * untyped_member, size_t size)
{
  village_interfaces__srv__BorrowMoney_Response__Sequence * member =
    (village_interfaces__srv__BorrowMoney_Response__Sequence *)(untyped_member);
  village_interfaces__srv__BorrowMoney_Response__Sequence__fini(member);
  return village_interfaces__srv__BorrowMoney_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(village_interfaces__srv__BorrowMoney_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(village_interfaces__srv__BorrowMoney_Event, request),  // bytes offset in struct
    NULL,  // default value
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__size_function__BorrowMoney_Event__request,  // size() function pointer
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__get_const_function__BorrowMoney_Event__request,  // get_const(index) function pointer
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__get_function__BorrowMoney_Event__request,  // get(index) function pointer
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__fetch_function__BorrowMoney_Event__request,  // fetch(index, &value) function pointer
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__assign_function__BorrowMoney_Event__request,  // assign(index, value) function pointer
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__resize_function__BorrowMoney_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(village_interfaces__srv__BorrowMoney_Event, response),  // bytes offset in struct
    NULL,  // default value
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__size_function__BorrowMoney_Event__response,  // size() function pointer
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__get_const_function__BorrowMoney_Event__response,  // get_const(index) function pointer
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__get_function__BorrowMoney_Event__response,  // get(index) function pointer
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__fetch_function__BorrowMoney_Event__response,  // fetch(index, &value) function pointer
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__assign_function__BorrowMoney_Event__response,  // assign(index, value) function pointer
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__resize_function__BorrowMoney_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_message_members = {
  "village_interfaces__srv",  // message namespace
  "BorrowMoney_Event",  // message name
  3,  // number of fields
  sizeof(village_interfaces__srv__BorrowMoney_Event),
  village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_message_member_array,  // message members
  village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_message_type_support_handle = {
  0,
  &village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_message_members,
  get_message_typesupport_handle_function,
  &village_interfaces__srv__BorrowMoney_Event__get_type_hash,
  &village_interfaces__srv__BorrowMoney_Event__get_type_description,
  &village_interfaces__srv__BorrowMoney_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_village_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, BorrowMoney_Event)() {
  village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, BorrowMoney_Request)();
  village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, BorrowMoney_Response)();
  if (!village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_message_type_support_handle.typesupport_identifier) {
    village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "village_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "village_interfaces/srv/detail/borrow_money__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers village_interfaces__srv__detail__borrow_money__rosidl_typesupport_introspection_c__BorrowMoney_service_members = {
  "village_interfaces__srv",  // service namespace
  "BorrowMoney",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // village_interfaces__srv__detail__borrow_money__rosidl_typesupport_introspection_c__BorrowMoney_Request_message_type_support_handle,
  NULL,  // response message
  // village_interfaces__srv__detail__borrow_money__rosidl_typesupport_introspection_c__BorrowMoney_Response_message_type_support_handle
  NULL  // event_message
  // village_interfaces__srv__detail__borrow_money__rosidl_typesupport_introspection_c__BorrowMoney_Response_message_type_support_handle
};


static rosidl_service_type_support_t village_interfaces__srv__detail__borrow_money__rosidl_typesupport_introspection_c__BorrowMoney_service_type_support_handle = {
  0,
  &village_interfaces__srv__detail__borrow_money__rosidl_typesupport_introspection_c__BorrowMoney_service_members,
  get_service_typesupport_handle_function,
  &village_interfaces__srv__BorrowMoney_Request__rosidl_typesupport_introspection_c__BorrowMoney_Request_message_type_support_handle,
  &village_interfaces__srv__BorrowMoney_Response__rosidl_typesupport_introspection_c__BorrowMoney_Response_message_type_support_handle,
  &village_interfaces__srv__BorrowMoney_Event__rosidl_typesupport_introspection_c__BorrowMoney_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    village_interfaces,
    srv,
    BorrowMoney
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    village_interfaces,
    srv,
    BorrowMoney
  ),
  &village_interfaces__srv__BorrowMoney__get_type_hash,
  &village_interfaces__srv__BorrowMoney__get_type_description,
  &village_interfaces__srv__BorrowMoney__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, BorrowMoney_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, BorrowMoney_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, BorrowMoney_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_village_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, BorrowMoney)() {
  if (!village_interfaces__srv__detail__borrow_money__rosidl_typesupport_introspection_c__BorrowMoney_service_type_support_handle.typesupport_identifier) {
    village_interfaces__srv__detail__borrow_money__rosidl_typesupport_introspection_c__BorrowMoney_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)village_interfaces__srv__detail__borrow_money__rosidl_typesupport_introspection_c__BorrowMoney_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, BorrowMoney_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, BorrowMoney_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, village_interfaces, srv, BorrowMoney_Event)()->data;
  }

  return &village_interfaces__srv__detail__borrow_money__rosidl_typesupport_introspection_c__BorrowMoney_service_type_support_handle;
}
