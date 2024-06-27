#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) { // std::cout << "Default Point constructor called" << std::endl;
}

Point::~Point() { // std::cout << "Point destructor called" << std::endl;
}

Point::Point(float xx, float yy) : x(xx), y(yy) {
    // std::cout << "Float Point constructor called" << std::endl;
}

Point& Point::operator=(const Point& src) {
    // std::cout << "Copy assignement operator called" << std::endl;
    const_cast<Fixed&>(x) = src.x;
    const_cast<Fixed&>(y) = src.x;
    return *this;
}

const Fixed Point::getX() const { return x; }

const Fixed Point::getY() const { return y; }
