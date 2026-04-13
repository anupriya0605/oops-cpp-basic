#include <iostream>
#include <cmath>
using namespace std;
class Rectangular;
class Polar
{
    float magnitude;
    float angle;
public:
    Polar(float mag,float ang)
    {
        magnitude=mag;
        angle=ang;
    }
    Rectangular convert();
};
class Rectangular
{
    float x,y;
public:
    Rectangular(float xVal,float yVal)
    {
        x=xVal;
        y=yVal;
    }
    void display()
    {
       cout << "Rectangular coordinates: (" << x << " + j " << y << ")" << endl;
    }
};
Rectangular Polar::convert()
{
    float theta = angle * M_PI / 180.0;
    float x = magnitude * cos(theta);
    float y = magnitude * sin(theta);
    return Rectangular(x, y);
}

int main()
{
    float m,a;
    cout << "Enter the magnitude: ";
    cin >> m;
    cout << "Enter the angle: ";
    cin >> a;
    Polar p(m,a);
    Rectangular r = p.convert();
    r.display();
    return 0;
}
