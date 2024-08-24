// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from village_interfaces:srv/SellNovel.idl
// generated code does not contain a copyright notice

#include "village_interfaces/srv/detail/sell_novel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_village_interfaces
const rosidl_type_hash_t *
village_interfaces__srv__SellNovel__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2a, 0xc8, 0xbc, 0x46, 0xc6, 0x02, 0xcc, 0xd2,
      0xba, 0x0a, 0x56, 0xcd, 0x47, 0x00, 0xc1, 0x30,
      0x06, 0xc5, 0x57, 0xd3, 0x96, 0x2d, 0xc9, 0x67,
      0xd9, 0x3c, 0x1d, 0x23, 0x4c, 0xf5, 0x7d, 0x7a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_village_interfaces
const rosidl_type_hash_t *
village_interfaces__srv__SellNovel_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x39, 0xf0, 0xa6, 0x75, 0x55, 0x85, 0x45, 0xbf,
      0x2d, 0x91, 0x42, 0x77, 0xdf, 0x55, 0x32, 0x23,
      0x49, 0xe4, 0xc1, 0x1f, 0x48, 0x99, 0x08, 0x42,
      0xe1, 0x46, 0x6a, 0x4a, 0x75, 0x04, 0x52, 0xa7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_village_interfaces
const rosidl_type_hash_t *
village_interfaces__srv__SellNovel_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0x4f, 0xd5, 0x4a, 0x94, 0x31, 0xd4, 0x46,
      0x0e, 0x0a, 0x8b, 0xce, 0xc8, 0x45, 0x16, 0x27,
      0x1a, 0xd9, 0x43, 0x59, 0xde, 0x30, 0x71, 0xcf,
      0x6b, 0x01, 0x2f, 0xdb, 0xe2, 0x67, 0x9a, 0x27,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_village_interfaces
const rosidl_type_hash_t *
village_interfaces__srv__SellNovel_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xad, 0xb1, 0x89, 0xfc, 0x9e, 0xc9, 0xa3, 0x05,
      0xc5, 0xd0, 0x24, 0x98, 0x56, 0x0f, 0xd2, 0x34,
      0x12, 0x6e, 0xf8, 0xf6, 0x45, 0x8a, 0x59, 0x6e,
      0x8d, 0x1d, 0xde, 0x23, 0xa5, 0x9b, 0xa0, 0x7d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char village_interfaces__srv__SellNovel__TYPE_NAME[] = "village_interfaces/srv/SellNovel";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char village_interfaces__srv__SellNovel_Event__TYPE_NAME[] = "village_interfaces/srv/SellNovel_Event";
static char village_interfaces__srv__SellNovel_Request__TYPE_NAME[] = "village_interfaces/srv/SellNovel_Request";
static char village_interfaces__srv__SellNovel_Response__TYPE_NAME[] = "village_interfaces/srv/SellNovel_Response";

// Define type names, field names, and default values
static char village_interfaces__srv__SellNovel__FIELD_NAME__request_message[] = "request_message";
static char village_interfaces__srv__SellNovel__FIELD_NAME__response_message[] = "response_message";
static char village_interfaces__srv__SellNovel__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field village_interfaces__srv__SellNovel__FIELDS[] = {
  {
    {village_interfaces__srv__SellNovel__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {village_interfaces__srv__SellNovel_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {village_interfaces__srv__SellNovel__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {village_interfaces__srv__SellNovel_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {village_interfaces__srv__SellNovel__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {village_interfaces__srv__SellNovel_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription village_interfaces__srv__SellNovel__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {village_interfaces__srv__SellNovel_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {village_interfaces__srv__SellNovel_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {village_interfaces__srv__SellNovel_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
village_interfaces__srv__SellNovel__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {village_interfaces__srv__SellNovel__TYPE_NAME, 32, 32},
      {village_interfaces__srv__SellNovel__FIELDS, 3, 3},
    },
    {village_interfaces__srv__SellNovel__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = village_interfaces__srv__SellNovel_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = village_interfaces__srv__SellNovel_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = village_interfaces__srv__SellNovel_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char village_interfaces__srv__SellNovel_Request__FIELD_NAME__money[] = "money";

static rosidl_runtime_c__type_description__Field village_interfaces__srv__SellNovel_Request__FIELDS[] = {
  {
    {village_interfaces__srv__SellNovel_Request__FIELD_NAME__money, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
village_interfaces__srv__SellNovel_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {village_interfaces__srv__SellNovel_Request__TYPE_NAME, 40, 40},
      {village_interfaces__srv__SellNovel_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char village_interfaces__srv__SellNovel_Response__FIELD_NAME__novels[] = "novels";

static rosidl_runtime_c__type_description__Field village_interfaces__srv__SellNovel_Response__FIELDS[] = {
  {
    {village_interfaces__srv__SellNovel_Response__FIELD_NAME__novels, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
village_interfaces__srv__SellNovel_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {village_interfaces__srv__SellNovel_Response__TYPE_NAME, 41, 41},
      {village_interfaces__srv__SellNovel_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char village_interfaces__srv__SellNovel_Event__FIELD_NAME__info[] = "info";
static char village_interfaces__srv__SellNovel_Event__FIELD_NAME__request[] = "request";
static char village_interfaces__srv__SellNovel_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field village_interfaces__srv__SellNovel_Event__FIELDS[] = {
  {
    {village_interfaces__srv__SellNovel_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {village_interfaces__srv__SellNovel_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {village_interfaces__srv__SellNovel_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {village_interfaces__srv__SellNovel_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {village_interfaces__srv__SellNovel_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription village_interfaces__srv__SellNovel_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {village_interfaces__srv__SellNovel_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {village_interfaces__srv__SellNovel_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
village_interfaces__srv__SellNovel_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {village_interfaces__srv__SellNovel_Event__TYPE_NAME, 38, 38},
      {village_interfaces__srv__SellNovel_Event__FIELDS, 3, 3},
    },
    {village_interfaces__srv__SellNovel_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = village_interfaces__srv__SellNovel_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = village_interfaces__srv__SellNovel_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 money\n"
  "---\n"
  "string[] novels";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
village_interfaces__srv__SellNovel__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {village_interfaces__srv__SellNovel__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
village_interfaces__srv__SellNovel_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {village_interfaces__srv__SellNovel_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
village_interfaces__srv__SellNovel_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {village_interfaces__srv__SellNovel_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
village_interfaces__srv__SellNovel_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {village_interfaces__srv__SellNovel_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
village_interfaces__srv__SellNovel__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *village_interfaces__srv__SellNovel__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *village_interfaces__srv__SellNovel_Event__get_individual_type_description_source(NULL);
    sources[4] = *village_interfaces__srv__SellNovel_Request__get_individual_type_description_source(NULL);
    sources[5] = *village_interfaces__srv__SellNovel_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
village_interfaces__srv__SellNovel_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *village_interfaces__srv__SellNovel_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
village_interfaces__srv__SellNovel_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *village_interfaces__srv__SellNovel_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
village_interfaces__srv__SellNovel_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *village_interfaces__srv__SellNovel_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *village_interfaces__srv__SellNovel_Request__get_individual_type_description_source(NULL);
    sources[4] = *village_interfaces__srv__SellNovel_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
