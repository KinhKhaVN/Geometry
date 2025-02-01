#include <iostream>
#include <math.h>
#include <iomanip>

#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Square.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	std::cout << 5 << '\n';
	Point a(0, 0);
	Point b(4, 4);
	Point c;

	std::cout << std::fixed << std::setprecision(4);
	
	std::cout << c.getDist(a, b) << '\n';

	return 0;
}
