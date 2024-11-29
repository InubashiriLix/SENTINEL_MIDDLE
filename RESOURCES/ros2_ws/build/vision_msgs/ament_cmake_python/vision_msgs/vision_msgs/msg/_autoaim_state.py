# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vision_msgs:msg/AutoaimState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AutoaimState(type):
    """Metaclass of message 'AutoaimState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TARGET_ID0_NONE': 0,
        'TARGET_ID1_HERO': 1,
        'TARGET_ID2_ENGINEEER': 2,
        'TARGET_ID3_INFANTRY': 3,
        'TARGET_ID4_INFANTRY': 4,
        'TARGET_ID5_INFANTRY': 5,
        'TARGET_ID6_OUTPOST': 6,
        'TARGET_ID7_SENTRY': 7,
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
                'vision_msgs.msg.AutoaimState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__autoaim_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__autoaim_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__autoaim_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__autoaim_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__autoaim_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TARGET_ID0_NONE': cls.__constants['TARGET_ID0_NONE'],
            'TARGET_ID1_HERO': cls.__constants['TARGET_ID1_HERO'],
            'TARGET_ID2_ENGINEEER': cls.__constants['TARGET_ID2_ENGINEEER'],
            'TARGET_ID3_INFANTRY': cls.__constants['TARGET_ID3_INFANTRY'],
            'TARGET_ID4_INFANTRY': cls.__constants['TARGET_ID4_INFANTRY'],
            'TARGET_ID5_INFANTRY': cls.__constants['TARGET_ID5_INFANTRY'],
            'TARGET_ID6_OUTPOST': cls.__constants['TARGET_ID6_OUTPOST'],
            'TARGET_ID7_SENTRY': cls.__constants['TARGET_ID7_SENTRY'],
        }

    @property
    def TARGET_ID0_NONE(self):
        """Message constant 'TARGET_ID0_NONE'."""
        return Metaclass_AutoaimState.__constants['TARGET_ID0_NONE']

    @property
    def TARGET_ID1_HERO(self):
        """Message constant 'TARGET_ID1_HERO'."""
        return Metaclass_AutoaimState.__constants['TARGET_ID1_HERO']

    @property
    def TARGET_ID2_ENGINEEER(self):
        """Message constant 'TARGET_ID2_ENGINEEER'."""
        return Metaclass_AutoaimState.__constants['TARGET_ID2_ENGINEEER']

    @property
    def TARGET_ID3_INFANTRY(self):
        """Message constant 'TARGET_ID3_INFANTRY'."""
        return Metaclass_AutoaimState.__constants['TARGET_ID3_INFANTRY']

    @property
    def TARGET_ID4_INFANTRY(self):
        """Message constant 'TARGET_ID4_INFANTRY'."""
        return Metaclass_AutoaimState.__constants['TARGET_ID4_INFANTRY']

    @property
    def TARGET_ID5_INFANTRY(self):
        """Message constant 'TARGET_ID5_INFANTRY'."""
        return Metaclass_AutoaimState.__constants['TARGET_ID5_INFANTRY']

    @property
    def TARGET_ID6_OUTPOST(self):
        """Message constant 'TARGET_ID6_OUTPOST'."""
        return Metaclass_AutoaimState.__constants['TARGET_ID6_OUTPOST']

    @property
    def TARGET_ID7_SENTRY(self):
        """Message constant 'TARGET_ID7_SENTRY'."""
        return Metaclass_AutoaimState.__constants['TARGET_ID7_SENTRY']


class AutoaimState(metaclass=Metaclass_AutoaimState):
    """
    Message class 'AutoaimState'.

    Constants:
      TARGET_ID0_NONE
      TARGET_ID1_HERO
      TARGET_ID2_ENGINEEER
      TARGET_ID3_INFANTRY
      TARGET_ID4_INFANTRY
      TARGET_ID5_INFANTRY
      TARGET_ID6_OUTPOST
      TARGET_ID7_SENTRY
    """

    __slots__ = [
        '_header',
        '_autoaim_state',
        '_target_id',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'autoaim_state': 'uint8',
        'target_id': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.autoaim_state = kwargs.get('autoaim_state', int())
        self.target_id = kwargs.get('target_id', int())

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
        if self.header != other.header:
            return False
        if self.autoaim_state != other.autoaim_state:
            return False
        if self.target_id != other.target_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def autoaim_state(self):
        """Message field 'autoaim_state'."""
        return self._autoaim_state

    @autoaim_state.setter
    def autoaim_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'autoaim_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'autoaim_state' field must be an unsigned integer in [0, 255]"
        self._autoaim_state = value

    @builtins.property
    def target_id(self):
        """Message field 'target_id'."""
        return self._target_id

    @target_id.setter
    def target_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target_id' field must be an unsigned integer in [0, 255]"
        self._target_id = value
