// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hero_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#ifndef HERO_MSGS__MSG__DETAIL__MOTION__TRAITS_HPP_
#define HERO_MSGS__MSG__DETAIL__MOTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hero_msgs/msg/detail/motion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hero_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Motion & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_x
  {
    out << "linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_x, out);
    out << ", ";
  }

  // member: linear_y
  {
    out << "linear_y: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_y, out);
    out << ", ";
  }

  // member: angular_z
  {
    out << "angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_x: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_x, out);
    out << "\n";
  }

  // member: linear_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_y: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_y, out);
    out << "\n";
  }

  // member: angular_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_z: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motion & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace hero_msgs

namespace rosidl_generator_traits
{

[[deprecated("use hero_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hero_msgs::msg::Motion & msg,
  std::ostream & out, size_t indentation = 0)
{
  hero_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hero_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const hero_msgs::msg::Motion & msg)
{
  return hero_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<hero_msgs::msg::Motion>()
{
  return "hero_msgs::msg::Motion";
}

template<>
inline const char * name<hero_msgs::msg::Motion>()
{
  return "hero_msgs/msg/Motion";
}

template<>
struct has_fixed_size<hero_msgs::msg::Motion>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hero_msgs::msg::Motion>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hero_msgs::msg::Motion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HERO_MSGS__MSG__DETAIL__MOTION__TRAITS_HPP_
