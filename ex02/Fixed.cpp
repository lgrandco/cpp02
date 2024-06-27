#include "Fixed.hpp"

Fixed::Fixed() : _value(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed& src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(const Fixed& src) {
    std::cout << "Copy assignement operator called" << std::endl;
    _value = src.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}
void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    _value = value << fractionnal_bits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << fractionnal_bits));
}

float Fixed::toFloat(void) const { return (float)_value / (1 << fractionnal_bits); }

int Fixed::toInt(void) const { return _value >> fractionnal_bits; }

std::ostream& operator<<(std::ostream& out, const Fixed& value) {
    out << value.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed& value) const { return _value > value._value; }

bool Fixed::operator<(const Fixed& value) const { return _value < value._value; }

bool Fixed::operator>=(const Fixed& value) const { return _value >= value._value; }

bool Fixed::operator<=(const Fixed& value) const { return _value <= value._value; }

bool Fixed::operator==(const Fixed& value) const { return _value == value._value; }

bool Fixed::operator!=(const Fixed& value) const { return _value != value._value; }

Fixed& Fixed::operator+(const Fixed& value) {
    _value += value._value;
    std::cout << "value: " << value._value << std::endl;
    return *this;
}

Fixed& Fixed::operator-(const Fixed& value) {
    _value -= value._value;
    return *this;
}

Fixed& Fixed::operator*(const Fixed& value) {
    std::cout << "value: " << value._value << std::endl;
    _value = (_value * value._value) >> fractionnal_bits;
    return *this;
}

Fixed& Fixed::operator/(const Fixed& value) {
    _value = (_value << fractionnal_bits) / value._value;
    return *this;
}

Fixed& Fixed::operator++() {
    _value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed& Fixed::operator--() {
    _value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) { return a < b ? a : b; }

Fixed& Fixed::max(Fixed& a, Fixed& b) { return a > b ? a : b; }

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) { return a < b ? a : b; }

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) { return a > b ? a : b; }
