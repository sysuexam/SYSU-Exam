// 此文件为锁定文件，请勿编辑该文件

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Rectangle
{
public:
    Rectangle(float length, float width, int len);
    ~Rectangle();

    void RectanglePrint()
    {
        cout << "The Rectangle's length is " << fixed << setprecision(2) << attribution_list[0] << endl;
        cout << "The Rectangle's width is " << fixed << setprecision(2) << attribution_list[1] << endl;
        cout << "The Rectangle's area is " << fixed << setprecision(2) << attribution_list[2] << endl;
        cout << "The Rectangle's perimeter is " << fixed << setprecision(2) << attribution_list[3] << endl;
    }

private:
    float *attribution_list;
    int size;
};