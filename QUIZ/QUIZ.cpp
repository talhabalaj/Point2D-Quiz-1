#include <iostream>
#include "Point2D.h"

using namespace std;

int main()
{
	Point2D p1, p2(5, 9);
	p1.setPoint(2, 3);
	p1.print();
	cout << p1.calculateDistance(p2);
}

