# this file aim to provide the validation forms
# like
# 1 parity calculate_parity
import binascii

CRC8_POLYNOMIAL = 0x31
CRC8_INIT = 0xFF


def calculate_parity(data: int, parity_type: str) -> int:
    """
    calculate the odd or the even of the data
    :param data: int (uint8_t)
    :param parity_type: "odd" means the odd validation, "even" stands for even validation
    :return: validation pos
    """

    if parity_type not in ("even", "odd"):
        raise ValueError("the type of validation should be the odd and the even")

    parity = 0

    while data:
        parity ^= data & 1
        data >>= 1

    # change the oddity
    if parity_type == "even":
        parity = ~parity & 1

    return parity


def vertify_parity(data: int, parity_bit: int, parity_type: str) -> bool:
    """
    :param data: digital bytes (0-255)
    :param parity_bit: the parity that recveived
    :param parity parity_type: should be "odd" or the "even"
    :return: wheather has pass the validation
    """

    calculated_parity = calculate_parity(data, parity_type)
    return calculated_parity == parity_bit


def test_vertify_parity():
    data = 0b1010101
    parity_bit = 1
    parity_type = "odd"

    print(vertify_parity(data, parity_bit, parity_type))


def calculate_CRC8(data: bytes) -> int:
    """
    calculate the parity of the CRC8
    :params data: bytes stream
    :return: CRC calculating result
    """
    crc = CRC8_INIT
    for byte in data:
        crc ^= byte
        for _ in range(8):
            if crc & 0x80:
                crc = (crc << 1) ^ CRC8_POLYNOMIAL
            else:
                crc <<= 1
            crc &= 0xFF
    return crc


def vertify_crc8(data: bytes, recveived_crc: int) -> bool:
    """ "
    calculate the CRC DATA
    :param data: data stream
    :param recveived_crc: the verification code
    :return: whether the data has expolished
    """
    calculated_crc8 = calculate_CRC8(data)
    return calculated_crc8 == recveived_crc


def test_vertify_crc8():
    data = b"\x01\x02\x03"
    crc = calculate_CRC8(data)
    print(f"the {data} with {crc}: {vertify_crc8(data, crc)}")


def calculate_CRC16(data: bytes) -> int:
    # calculate the data received
    return binascii.crc_hqx(data, 0xFFFF)


def vertify_crc16(data: bytes, received_crc: int) -> bool:
    return calculate_CRC16(data) == received_crc


def test_verify_crc16():
    data = b"\x01\x02\x03"
    crc16 = calculate_CRC16(data)
    if vertify_crc16(data, crc16):
        print("Validation Success")
    else:
        print("Validation Failed!")


if __name__ == "__main__":
    print("testing crc16")
    test_verify_crc16()
    print("testing crc8")
    test_vertify_crc8()
    print("test parity ")
    test_vertify_parity()
