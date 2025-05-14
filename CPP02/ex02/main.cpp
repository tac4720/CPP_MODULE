
#include <iostream>
#include "Fixed.hpp"

int main() {
    std::cout << "--- Constructors ---" << std::endl;
    Fixed a;
    Fixed b(10);
    Fixed c(42.42f);
    Fixed d(b);

    std::cout << "--- Assignment ---" << std::endl;
    a = Fixed(1234.4321f);

    std::cout << "--- toInt / toFloat ---" << std::endl;
    std::cout << "a: " << a << ", toInt: " << a.toInt() << std::endl;
    std::cout << "b: " << b << ", toInt: " << b.toInt() << std::endl;
    std::cout << "c: " << c << ", toInt: " << c.toInt() << std::endl;
    std::cout << "d: " << d << ", toInt: " << d.toInt() << std::endl;

    std::cout << "--- Arithmetic ---" << std::endl;
    Fixed e = b + c;
    Fixed f = c - b;
    Fixed g = b * c;
    Fixed h = c / b;
    std::cout << "b + c = " << e << std::endl;
    std::cout << "c - b = " << f << std::endl;
    std::cout << "b * c = " << g << std::endl;
    std::cout << "c / b = " << h << std::endl;

    std::cout << "--- Comparison ---" << std::endl;
    std::cout << "b > c: " << (b > c) << std::endl;
    std::cout << "b < c: " << (b < c) << std::endl;
    std::cout << "b >= d: " << (b >= d) << std::endl;
    std::cout << "b <= d: " << (b <= d) << std::endl;
    std::cout << "b == d: " << (b == d) << std::endl;
    std::cout << "b != c: " << (b != c) << std::endl;

    std::cout << "--- Increment / Decrement ---" << std::endl;
    Fixed i;
    std::cout << "i: " << i << std::endl;
    std::cout << "++i: " << ++i << std::endl;
    std::cout << "i: " << i << std::endl;
    std::cout << "i++: " << i++ << std::endl;
    std::cout << "i: " << i << std::endl;
    std::cout << "--i: " << --i << std::endl;
    std::cout << "i--: " << i-- << std::endl;
    std::cout << "i: " << i << std::endl;

    std::cout << "--- min / max ---" << std::endl;
    Fixed x(3.14f);
    Fixed y(2.71f);
    std::cout << "min(x, y): " << Fixed::min(x, y) << std::endl;
    std::cout << "max(x, y): " << Fixed::max(x, y) << std::endl;

    const Fixed cx(5.5f);
    const Fixed cy(6.6f);
    std::cout << "min(cx, cy): " << Fixed::min(cx, cy) << std::endl;
    std::cout << "max(cx, cy): " << Fixed::max(cx, cy) << std::endl;

    return 0;
}

