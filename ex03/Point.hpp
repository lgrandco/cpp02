#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
    const Fixed x;
    const Fixed y;

public:
    Point();
    ~Point();
    Point(float, float);
    Point& operator=(const Point&);
    const Fixed getX() const;
    const Fixed getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif // !POINT_HPP
