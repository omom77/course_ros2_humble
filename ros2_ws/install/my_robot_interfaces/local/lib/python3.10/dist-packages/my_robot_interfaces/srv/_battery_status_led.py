# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_robot_interfaces:srv/BatteryStatusLed.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BatteryStatusLed_Request(type):
    """Metaclass of message 'BatteryStatusLed_Request'."""

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
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.BatteryStatusLed_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__battery_status_led__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__battery_status_led__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__battery_status_led__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__battery_status_led__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__battery_status_led__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BatteryStatusLed_Request(metaclass=Metaclass_BatteryStatusLed_Request):
    """Message class 'BatteryStatusLed_Request'."""

    __slots__ = [
        '_battery_level',
        '_led_condition',
    ]

    _fields_and_field_types = {
        'battery_level': 'int32',
        'led_condition': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.battery_level = kwargs.get('battery_level', int())
        self.led_condition = kwargs.get('led_condition', str())

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
        if self.battery_level != other.battery_level:
            return False
        if self.led_condition != other.led_condition:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def battery_level(self):
        """Message field 'battery_level'."""
        return self._battery_level

    @battery_level.setter
    def battery_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_level' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'battery_level' field must be an integer in [-2147483648, 2147483647]"
        self._battery_level = value

    @builtins.property
    def led_condition(self):
        """Message field 'led_condition'."""
        return self._led_condition

    @led_condition.setter
    def led_condition(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'led_condition' field must be of type 'str'"
        self._led_condition = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BatteryStatusLed_Response(type):
    """Metaclass of message 'BatteryStatusLed_Response'."""

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
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.BatteryStatusLed_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__battery_status_led__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__battery_status_led__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__battery_status_led__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__battery_status_led__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__battery_status_led__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BatteryStatusLed_Response(metaclass=Metaclass_BatteryStatusLed_Response):
    """Message class 'BatteryStatusLed_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_BatteryStatusLed(type):
    """Metaclass of service 'BatteryStatusLed'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_robot_interfaces.srv.BatteryStatusLed')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__battery_status_led

            from my_robot_interfaces.srv import _battery_status_led
            if _battery_status_led.Metaclass_BatteryStatusLed_Request._TYPE_SUPPORT is None:
                _battery_status_led.Metaclass_BatteryStatusLed_Request.__import_type_support__()
            if _battery_status_led.Metaclass_BatteryStatusLed_Response._TYPE_SUPPORT is None:
                _battery_status_led.Metaclass_BatteryStatusLed_Response.__import_type_support__()


class BatteryStatusLed(metaclass=Metaclass_BatteryStatusLed):
    from my_robot_interfaces.srv._battery_status_led import BatteryStatusLed_Request as Request
    from my_robot_interfaces.srv._battery_status_led import BatteryStatusLed_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
