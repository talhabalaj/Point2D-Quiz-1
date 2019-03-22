#include "Point2D.h"
#include <iostream>
#include <math.h>

using namespace std;

Point2D::Point2D() {
	// Passing 0 to the setter
	setPoint(0, 0);
}

Point2D::Point2D(int x, int y) {
	// Passing x and y from argments to setter
	setPoint(x, y);
}

void Point2D::print() {
	// Printing using cout
	cout << "x: " << x << " y: " << y << endl;
}

void Point2D::setPoint(int x, int y) {
	// Setting the values 
	this->x = x;
	this->y = y;
}

double Point2D::calculateDistance(const Point2D & o) {
	// calculating distance 
	double distance = sqrt(pow((x - o.x), 2) + pow((y - o.y), 2));
	return distance;
}