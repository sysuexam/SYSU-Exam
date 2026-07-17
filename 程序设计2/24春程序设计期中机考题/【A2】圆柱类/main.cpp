// 该文件为锁定文件，请勿编辑该文件

#include <iostream>
#include <iomanip>
#include "cylinder.hpp"
using namespace std;

void print(Cylinder &cylinder)
{
    cout << "Cylinder Information:" << endl;
    cout << "radius: " << cylinder.get_radius() << endl;
    cout << "height: " << cylinder.get_height() << endl;
    cout << fixed << setprecision(2);
    cout << "area: " << cylinder.get_area() << endl;
    cout << "volume: " << cylinder.get_volume() << endl;
}

int main()
{
    double radius, height;
    cin >> radius >> height;

    Cylinder cylinder;
    cylinder.set_radius(radius);
    cylinder.set_height(height);
    print(cylinder);

    return 0;
}