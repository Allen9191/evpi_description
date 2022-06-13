# generated from rosidl_generator_py/resource/_idl.py.em
# with input from evpi_interfaces:msg/Mode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Mode(type):
    """Metaclass of message 'Mode'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('evpi_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'evpi_interfaces.msg.Mode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Mode(metaclass=Metaclass_Mode):
    """Message class 'Mode'."""

    __slots__ = [
        '_strip_id',
        '_mode',
        '_red_value',
        '_green_value',
        '_blue_value',
    ]

    _fields_and_field_types = {
        'strip_id': 'int8',
        'mode': 'int64',
        'red_value': 'int8',
        'green_value': 'int8',
        'blue_value': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.strip_id = kwargs.get('strip_id', int())
        self.mode = kwargs.get('mode', int())
        self.red_value = kwargs.get('red_value', int())
        self.green_value = kwargs.get('green_value', int())
        self.blue_value = kwargs.get('blue_value', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.strip_id != other.strip_id:
            return False
        if self.mode != other.mode:
            return False
        if self.red_value != other.red_value:
            return False
        if self.green_value != other.green_value:
            return False
        if self.blue_value != other.blue_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def strip_id(self):
        """Message field 'strip_id'."""
        return self._strip_id

    @strip_id.setter
    def strip_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'strip_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'strip_id' field must be an integer in [-128, 127]"
        self._strip_id = value

    @property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'mode' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._mode = value

    @property
    def red_value(self):
        """Message field 'red_value'."""
        return self._red_value

    @red_value.setter
    def red_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'red_value' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'red_value' field must be an integer in [-128, 127]"
        self._red_value = value

    @property
    def green_value(self):
        """Message field 'green_value'."""
        return self._green_value

    @green_value.setter
    def green_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'green_value' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'green_value' field must be an integer in [-128, 127]"
        self._green_value = value

    @property
    def blue_value(self):
        """Message field 'blue_value'."""
        return self._blue_value

    @blue_value.setter
    def blue_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blue_value' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'blue_value' field must be an integer in [-128, 127]"
        self._blue_value = value
