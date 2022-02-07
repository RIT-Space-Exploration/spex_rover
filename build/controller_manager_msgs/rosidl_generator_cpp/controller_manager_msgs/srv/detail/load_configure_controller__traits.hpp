// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from controller_manager_msgs:srv/LoadConfigureController.idl
// generated code does not contain a copyright notice

#ifndef CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LOAD_CONFIGURE_CONTROLLER__TRAITS_HPP_
#define CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LOAD_CONFIGURE_CONTROLLER__TRAITS_HPP_

#include "controller_manager_msgs/srv/detail/load_configure_controller__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_manager_msgs::srv::LoadConfigureController_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_manager_msgs::srv::LoadConfigureController_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_manager_msgs::srv::LoadConfigureController_Request>()
{
  return "controller_manager_msgs::srv::LoadConfigureController_Request";
}

template<>
inline const char * name<controller_manager_msgs::srv::LoadConfigureController_Request>()
{
  return "controller_manager_msgs/srv/LoadConfigureController_Request";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::LoadConfigureController_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::LoadConfigureController_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<controller_manager_msgs::srv::LoadConfigureController_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const controller_manager_msgs::srv::LoadConfigureController_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ok: ";
    value_to_yaml(msg.ok, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const controller_manager_msgs::srv::LoadConfigureController_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<controller_manager_msgs::srv::LoadConfigureController_Response>()
{
  return "controller_manager_msgs::srv::LoadConfigureController_Response";
}

template<>
inline const char * name<controller_manager_msgs::srv::LoadConfigureController_Response>()
{
  return "controller_manager_msgs/srv/LoadConfigureController_Response";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::LoadConfigureController_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<controller_manager_msgs::srv::LoadConfigureController_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<controller_manager_msgs::srv::LoadConfigureController_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<controller_manager_msgs::srv::LoadConfigureController>()
{
  return "controller_manager_msgs::srv::LoadConfigureController";
}

template<>
inline const char * name<controller_manager_msgs::srv::LoadConfigureController>()
{
  return "controller_manager_msgs/srv/LoadConfigureController";
}

template<>
struct has_fixed_size<controller_manager_msgs::srv::LoadConfigureController>
  : std::integral_constant<
    bool,
    has_fixed_size<controller_manager_msgs::srv::LoadConfigureController_Request>::value &&
    has_fixed_size<controller_manager_msgs::srv::LoadConfigureController_Response>::value
  >
{
};

template<>
struct has_bounded_size<controller_manager_msgs::srv::LoadConfigureController>
  : std::integral_constant<
    bool,
    has_bounded_size<controller_manager_msgs::srv::LoadConfigureController_Request>::value &&
    has_bounded_size<controller_manager_msgs::srv::LoadConfigureController_Response>::value
  >
{
};

template<>
struct is_service<controller_manager_msgs::srv::LoadConfigureController>
  : std::true_type
{
};

template<>
struct is_service_request<controller_manager_msgs::srv::LoadConfigureController_Request>
  : std::true_type
{
};

template<>
struct is_service_response<controller_manager_msgs::srv::LoadConfigureController_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CONTROLLER_MANAGER_MSGS__SRV__DETAIL__LOAD_CONFIGURE_CONTROLLER__TRAITS_HPP_
