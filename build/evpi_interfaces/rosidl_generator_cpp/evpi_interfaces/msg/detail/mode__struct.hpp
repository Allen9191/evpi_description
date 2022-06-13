// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from evpi_interfaces:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef EVPI_INTERFACES__MSG__DETAIL__MODE__STRUCT_HPP_
#define EVPI_INTERFACES__MSG__DETAIL__MODE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__evpi_interfaces__msg__Mode __attribute__((deprecated))
#else
# define DEPRECATED__evpi_interfaces__msg__Mode __declspec(deprecated)
#endif

namespace evpi_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mode_
{
  using Type = Mode_<ContainerAllocator>;

  explicit Mode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->strip_id = 0;
      this->mode = 0ll;
      this->red_value = 0;
      this->green_value = 0;
      this->blue_value = 0;
    }
  }

  explicit Mode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->strip_id = 0;
      this->mode = 0ll;
      this->red_value = 0;
      this->green_value = 0;
      this->blue_value = 0;
    }
  }

  // field types and members
  using _strip_id_type =
    int8_t;
  _strip_id_type strip_id;
  using _mode_type =
    int64_t;
  _mode_type mode;
  using _red_value_type =
    int8_t;
  _red_value_type red_value;
  using _green_value_type =
    int8_t;
  _green_value_type green_value;
  using _blue_value_type =
    int8_t;
  _blue_value_type blue_value;

  // setters for named parameter idiom
  Type & set__strip_id(
    const int8_t & _arg)
  {
    this->strip_id = _arg;
    return *this;
  }
  Type & set__mode(
    const int64_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__red_value(
    const int8_t & _arg)
  {
    this->red_value = _arg;
    return *this;
  }
  Type & set__green_value(
    const int8_t & _arg)
  {
    this->green_value = _arg;
    return *this;
  }
  Type & set__blue_value(
    const int8_t & _arg)
  {
    this->blue_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    evpi_interfaces::msg::Mode_<ContainerAllocator> *;
  using ConstRawPtr =
    const evpi_interfaces::msg::Mode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<evpi_interfaces::msg::Mode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<evpi_interfaces::msg::Mode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      evpi_interfaces::msg::Mode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<evpi_interfaces::msg::Mode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      evpi_interfaces::msg::Mode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<evpi_interfaces::msg::Mode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<evpi_interfaces::msg::Mode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<evpi_interfaces::msg::Mode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__evpi_interfaces__msg__Mode
    std::shared_ptr<evpi_interfaces::msg::Mode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__evpi_interfaces__msg__Mode
    std::shared_ptr<evpi_interfaces::msg::Mode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mode_ & other) const
  {
    if (this->strip_id != other.strip_id) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->red_value != other.red_value) {
      return false;
    }
    if (this->green_value != other.green_value) {
      return false;
    }
    if (this->blue_value != other.blue_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mode_

// alias to use template instance with default allocator
using Mode =
  evpi_interfaces::msg::Mode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace evpi_interfaces

#endif  // EVPI_INTERFACES__MSG__DETAIL__MODE__STRUCT_HPP_
