#include "Point.h"
#include <math.h>

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

Point::~Point(){}

double Point::getDist(const Point &lPoint, const Point &rPoint)
{
	int dx = rPoint.x - lPoint.x;
	int dy = rPoint.y - lPoint.y;

	dx *= dx;
	dy *= dy;

	return sqrt((double) dx + dy);
}
