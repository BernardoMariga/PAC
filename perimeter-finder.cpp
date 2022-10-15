// Finds the perimeter of a triangle in 2d space.

#include <iostream>
#include <cmath>

// Finds distance between 2 given points.
float distance(float x1, float y1, float x2, float y2){
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main()
{
    float x1, y1, x2, y2, x3, y3;

    // Reads (x1, y1), (x2, y2), (x3, y3).
    std::cout << "Enter the coordinates of the 3 vertices of a triangle as such: (x1. y1. x2. y2. x3. y3)." << "\n";
    std::cin >>

    x1 >> y1 >>
    x2 >> y2 >>
    x3 >> y3;

    // Sums each side of the triangle.
    std::cout << distance(x1, y1, x2, y2) + distance(x2, y2, x3, y3) + distance(x3, y3, x1, y1);
}
