#pragma once
#include <iostream>
class Rectangle2D
{
private:
	double x;
	double y;
	double width;
	double height;
public:
	Rectangle2D() { x, y = 0, 0; width, height = 1, 1; } //constructor without arguments
	Rectangle2D(double tx, double ty, double twidth, double theight) // constructor with arguments
	{
		// sets private class values to those in the argument
		setx(tx);
		sety(ty);
		setwidth(twidth);
		setheight(theight);
	}
	// get functions return x,y,width,height
	const double getx() const { return x; } // second const allows to use a class method within a method when passed by reference (used in contains(const Rectangle2D &r)
	const double gety() const { return y;}
	const double getwidth() const { return width; }
	const double getheight() const {return height; }
	//changes/sets values
	const void setx(int tx) { x = tx; }
	const void sety(int ty) { y = ty; }
	void setwidth(double twidth) {width = twidth; }
	void setheight(double theight) { height = theight; }

	const double getArea() { return (width*height); } // area multiplies width and height
	const double getPerimeter() { return (2 * width + 2 * height); } // perimeter returns adds 2 width and 2 height
	const bool contains(double tx, double ty) // contains with x,y arguments (a point on the graph)
	{
		double xDisplacement = getwidth() / 2; // distance from center x,y to the edges of rectangle from the orginal rectangle2D
		double yDisplacement = getheight() / 2;
		if (tx <= (x + xDisplacement) && tx >= (x - xDisplacement) && ty <= (y + yDisplacement) && ty >= (y - yDisplacement)) // checks if the the point values tx,ty are between the bounded regions of the rectangle
			return true;
		return false;
	}
	const bool contains(const Rectangle2D &r)// contains with Rectangle2D class argument
	{
		//distance of the edges to the center point of the rectanle
		double xDisplacement = width / 2;
		double yDisplacement = height / 2;
		//distance of the edges to the center point of r
		double rxDisplacement = r.getwidth() / 2;
		double ryDisplacement = r.getheight() / 2;
		// center point of r
		double rx = r.getx();
		double ry = r.gety();
		
		if ((rx+rxDisplacement) <= (x + xDisplacement) && // if the right edge of r is within the right edge of the rectangle
			(rx - rxDisplacement) >= (x - xDisplacement) && // if the left edge of r is within the left edge of the rectangle
			(ry + ryDisplacement) <= (y + yDisplacement) && // if the top edge of r is within the top edge of the rectanle
			(ry - ryDisplacement) >= (y - yDisplacement)) // if the bottom edge of r is within the bottom edge of the rectangle
			return true;
		return false;
	}
	const bool overlaps(const Rectangle2D &r)
	{
		double xDisplacement = width / 2; //distance of the edges to the center point of the rectanle
		double yDisplacement = height / 2;
		double rxDisplacement = r.getwidth() / 2;//distance of the edges to the center point of r
		double ryDisplacement = r.getheight() / 2;
		// center point of r
		double rx = r.getx();
		double ry = r.gety();
		if ((rx + rxDisplacement) <= (x + xDisplacement) && (rx + rxDisplacement) >= (x - xDisplacement)) // if the right edge of r is between the left and right edges of the rectangle
		{
			if ((ry + ryDisplacement) <= (y + yDisplacement) && (ry + ryDisplacement >= (y - yDisplacement))) // if the top edge of r is between the top and bottom edges of the rectangle
				return true;
			if ((ry - ryDisplacement) <= (y + yDisplacement) && (ry - ryDisplacement >= (y - yDisplacement))) // if the bottom edge of r is between the top and bottom edges of the rectangle
				return true;
		}
		if ((rx - rxDisplacement) <= (x + xDisplacement) && (rx - rxDisplacement) >= (x - xDisplacement)) // if the left edge of r is between the left and right edges of the rectangle
		{
			if ((ry + ryDisplacement) <= (y + yDisplacement) && (ry + ryDisplacement >= (y - yDisplacement))) // if the top edge of r is between the top and bottom edges of the rectangle
				return true;
			if ((ry - ryDisplacement) <= (y + yDisplacement) && (ry - ryDisplacement >= (y - yDisplacement))) // if the bottom edge of r is between the top and bottom edges of the rectangle
				return true;
		}
		return false; // if none of the edges of r overlap the rectangle
	}
};	