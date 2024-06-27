#include "Fixed.hpp"
#include "Point.hpp"

int main() {
    Point a(0, 0);
    Point b(4, 0);
    Point c(2, 4);

    // Test Case 1: Point inside the triangle
    Point p(2, 2);

    std::cout << bsp(a, b, c, p) << std::endl;

    // Test Case 2: Point outside the triangle
    Point p2(5, 2);
    std::cout << bsp(a, b, c, p2) << std::endl;

    // Test Case 3: Point on the edge of the triangle
    Point p3(1, 0);
    std::cout << bsp(a, b, c, p3) << std::endl;

    return 0;
}