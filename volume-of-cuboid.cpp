// Find the volume of a rectangular cuboid with a cylinder shaped hole in the middle.

#include <iostream>
#include <cmath>

// Finds volume of rectangular cuboid.
float volume_cuboid(float a, float b, float h){
    return a * b * h;
}

// Finds volume of cylinder.
float volume_cylinder(float r, float h){
    return M_PI * pow(r, 2) * h;
}

int main()
{
    float a, b, h, r;
    std::cout << "Enter a, b, h and r: " << "\n"; 
    std::cin >> a >> b >> h >> r;
    std::cout << volume_cuboid(a, b, h) - volume_cylinder(r, h);
}