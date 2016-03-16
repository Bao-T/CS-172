#include <iostream>
#include "RegularPolygon.h"
#include <cmath>

// declares the functions within the operators in the RegularPolygon class
RegularPolygon::RegularPolygon() // default constructor
{
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}
RegularPolygon::RegularPolygon(int nTemp, double sideTemp) // constructor given n and side values
{
	n = nTemp;
	side = sideTemp;
	x = 0;
	y = 0;
}
RegularPolygon::RegularPolygon(int nTemp, double sideTemp, double xTemp, double yTemp) //constructor give n, side, x, and y values
{
	n = nTemp;
	side = sideTemp;
	x = xTemp;
	y = yTemp;
}
const double RegularPolygon::getArea() {
	const double PI = 3.141592653589793; // defines pi
	return ((n*pow(side, 2)) / (4 * tan(PI / n))); // area formula
}
// defines the rest of the operators in RegularPolygon class
const int RegularPolygon::getN() { return n; }
const double RegularPolygon::getPerimeter() { return (side*n); }
const double RegularPolygon::getside(){ return side; }
const double RegularPolygon::getX() { return x; }
const double RegularPolygon::getY() { return y; }
const void RegularPolygon::setN(int nTemp) { n = nTemp; }
const void RegularPolygon::setSide(double sideTemp) { side = sideTemp; }
const void RegularPolygon::setX(double xTemp) { x = xTemp; }
const void RegularPolygon::setY(double yTemp) { y = yTemp; }