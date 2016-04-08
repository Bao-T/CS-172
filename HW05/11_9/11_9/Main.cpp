#include <iostream>
#include "Class.h"
int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);
	std::cout << "r1 area: " << r1.getArea() << "\nr1 permimeter: " << r1.getPerimeter() << std::endl;
	std::cout << std:: boolalpha << r1.contains(3, 3) << std::endl << r1.contains(r2) << std::endl << r1.overlaps(r3) << std::endl;
}