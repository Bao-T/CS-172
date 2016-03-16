#pragma once

class RegularPolygon {
private:
	int n;
	double side, x, y;
public:
	// constructors
	RegularPolygon();
	RegularPolygon(int nTemp, double sideTemp);
	RegularPolygon(int nTemp, double sideTemp, double xTemp, double yTemp);
	// accessors
	const double getArea();
	const int getN();
	const double getPerimeter();
	const double getside();
	const double getX();
	const double getY();
	// mutators
	const void setN(int nTemp);
	const void setSide(double sideTemp);
	const void setX(double xTemp);
	const void setY(double yTemp);
};