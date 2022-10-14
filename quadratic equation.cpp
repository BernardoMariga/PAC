// Quadratic equation function.

#include <iostream>
#include <cmath>

int main() 
{
    using namespace std;
    
    float a, b, c, x1, x2, delta;
    cout << "Enter the values of a, b e c: " << "\n";
    cin >> a >> b >> c;
    if(a != 0)
    {
        delta = b*b-4*a*c;
        if(delta>0)
        {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout << "The roots are: " << x1 << " e " << x2 << "\n";
        }
        if(delta==0)
        {
            x1 = x2 = -b/(2*a);
            cout << "The roots are the same: " << x1 << " e " << x2 << "\n";
        }
        if(delta<0)
        {
            cout << "There aren't real roots for this function." << "\n";
        }
    }
    else 
    {
        cout << "a can't be equal to 0" << "\n";
    }
    return 0;
}
