# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vision_msgs:msg/Armor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Armor(type):
    """Metaclass of message 'Armor'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BLUE': 0,
        'RED': 1,
        'ARMOR': 0,
        'ENERGY': 1,
        'ENEMY': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('vision_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vision_msgs.msg.Armor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__armor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__armor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__armor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__armor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__armor

            from vision_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BLUE': cls.__constants['BLUE'],
            'RED': cls.__constants['RED'],
            'ARMOR': cls.__constants['ARMOR'],
            'ENERGY': cls.__constants['ENERGY'],
            'ENEMY': cls.__constants['ENEMY'],
        }

    @property
    def BLUE(self):
        """Message constant 'BLUE'."""
        return Metaclass_Armor.__constants['BLUE']

    @property
    def RED(self):
        """Message constant 'RED'."""
        return Metaclass_Armor.__constants['RED']

    @property
    def ARMOR(self):
        """Message constant 'ARMOR'."""
        return Metaclass_Armor.__constants['ARMOR']

    @property
    def ENERGY(self):
        """Message constant 'ENERGY'."""
        return Metaclass_Armor.__constants['ENERGY']

    @property
    def ENEMY(self):
        """Message constant 'ENEMY'."""
        return Metaclass_Armor.__constants['ENEMY']


class Armor(metaclass=Metaclass_Armor):
    """
    Message class 'Armor'.

    Constants:
      BLUE
      RED
      ARMOR
      ENERGY
      ENEMY
    """

    __slots__ = [
        '_color',
        '_id',
        '_dis',
        '_armor_type',
        '_points',
    ]

    _fields_and_field_types = {
        'color': 'uint8',
        'id': 'uint8',
        'dis': 'float',
        'armor_type': 'uint8',
        'points': 'sequence<vision_msgs/Point>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['vision_msgs', 'msg'], 'Point')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.color = kwargs.get('color', int())
        self.id = kwargs.get('id', int())
        self.dis = kwargs.get('dis', float())
        self.armor_type = kwargs.get('armor_type', int())
        self.points = kwargs.get('points', [])

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
        if self.color != other.color:
            return False
        if self.id != other.id:
            return False
        if self.dis != other.dis:
            return False
        if self.armor_type != other.armor_type:
            return False
        if self.points != other.points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'color' field must be an unsigned integer in [0, 255]"
        self._color = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @builtins.property
    def dis(self):
        """Message field 'dis'."""
        return self._dis

    @dis.setter
    def dis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dis' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dis' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dis = value

    @builtins.property
    def armor_type(self):
        """Message field 'armor_type'."""
        return self._armor_type

    @armor_type.setter
    def armor_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'armor_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'armor_type' field must be an unsigned integer in [0, 255]"
        self._armor_type = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if __debug__:
            from vision_msgs.msg import Point
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Point'"
        self._points = value
