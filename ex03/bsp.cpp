#include "Point.hpp"

int calculate_area(Point const a, Point const b, Point const c) {
    return 0.5 * abs(a.getX().getRawBits() * (b.getY().getRawBits() - c.getY().getRawBits()) +
                     b.getX().getRawBits() * (c.getY().getRawBits() - a.getY().getRawBits()) +
                     c.getX().getRawBits() * (a.getY().getRawBits() - b.getY().getRawBits()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    int areaABC = calculate_area(a, b, c);
    int areaPAB = calculate_area(point, a, b);
    int areaPBC = calculate_area(point, b, c);
    int areaPCA = calculate_area(point, c, a);
    return areaABC == areaPAB + areaPBC + areaPCA;
}
