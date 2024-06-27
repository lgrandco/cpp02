#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
private:
    int _value;
    static const int fractionnal_bits = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed&);
    Fixed& operator=(const Fixed&);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed(const int);
    Fixed(const float);
    float toFloat(void) const;
    int toInt(void) const;
    bool operator>(const Fixed&) const;
    bool operator<(const Fixed&) const;
    bool operator>=(const Fixed&) const;
    bool operator<=(const Fixed&) const;
    bool operator==(const Fixed&) const;
    bool operator!=(const Fixed&) const;
    Fixed& operator+(const Fixed&);
    Fixed& operator-(const Fixed&);
    Fixed& operator*(const Fixed&);
    Fixed& operator/(const Fixed&);
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);
    static Fixed& min(Fixed&, Fixed&);
    static Fixed& max(Fixed&, Fixed&);
    static const Fixed& min(const Fixed&, const Fixed&);
    static const Fixed& max(const Fixed&, const Fixed&);
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);

#endif
