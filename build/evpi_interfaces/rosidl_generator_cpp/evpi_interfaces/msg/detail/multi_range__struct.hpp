// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from evpi_interfaces:msg/MultiRange.idl
// generated code does not contain a copyright notice

#ifndef EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__STRUCT_HPP_
#define EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__evpi_interfaces__msg__MultiRange __attribute__((deprecated))
#else
# define DEPRECATED__evpi_interfaces__msg__MultiRange __declspec(deprecated)
#endif

namespace evpi_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MultiRange_
{
  using Type = MultiRange_<ContainerAllocator>;

  explicit MultiRange_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_range = 0.0f;
      this->max_range = 0.0f;
      this->id = 0l;
    }
  }

  explicit MultiRange_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_range = 0.0f;
      this->max_range = 0.0f;
      this->id = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _min_range_type =
    float;
  _min_range_type min_range;
  using _max_range_type =
    float;
  _max_range_type max_range;
  using _id_type =
    int32_t;
  _id_type id;
  using _ranges_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _ranges_type ranges;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__min_range(
    const float & _arg)
  {
    this->min_range = _arg;
    return *this;
  }
  Type & set__max_range(
    const float & _arg)
  {
    this->max_range = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__ranges(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->ranges = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    evpi_interfaces::msg::MultiRange_<ContainerAllocator> *;
  using ConstRawPtr =
    const evpi_interfaces::msg::MultiRange_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<evpi_interfaces::msg::MultiRange_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<evpi_interfaces::msg::MultiRange_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      evpi_interfaces::msg::MultiRange_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<evpi_interfaces::msg::MultiRange_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      evpi_interfaces::msg::MultiRange_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<evpi_interfaces::msg::MultiRange_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<evpi_interfaces::msg::MultiRange_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<evpi_interfaces::msg::MultiRange_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__evpi_interfaces__msg__MultiRange
    std::shared_ptr<evpi_interfaces::msg::MultiRange_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__evpi_interfaces__msg__MultiRange
    std::shared_ptr<evpi_interfaces::msg::MultiRange_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MultiRange_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->min_range != other.min_range) {
      return false;
    }
    if (this->max_range != other.max_range) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->ranges != other.ranges) {
      return false;
    }
    return true;
  }
  bool operator!=(const MultiRange_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MultiRange_

// alias to use template instance with default allocator
using MultiRange =
  evpi_interfaces::msg::MultiRange_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace evpi_interfaces

#endif  // EVPI_INTERFACES__MSG__DETAIL__MULTI_RANGE__STRUCT_HPP_
