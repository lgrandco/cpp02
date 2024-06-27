#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _value;
	static const int fractionnal_bits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &);
	Fixed &operator=(const Fixed &);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
