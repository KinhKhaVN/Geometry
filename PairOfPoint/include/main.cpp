#include <iostream>
#include <math.h>
#include <cstdlib>




struct Point
{
        int x, y;

        Point(int x, int y): x(x), y(y) {};
};


void Print(Point p)
{
        std::cout << "(" << p.x << "," << p.y << ")\n"; 
}




int main ()
{
        Point p = Point(1, 2);

        std::cout << "Hello from Pairs of Point"; 

        Print(p);

        return 0;
}
