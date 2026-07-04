// 此文件为锁定文件，请勿编辑该文件

#pragma once
#include <math.h>

#define PI acos(-1)

class Cylinder
{
private:
    double radius, height;

public:
    double get_radius();
    double get_height();

    void set_radius(double r);
    void set_height(double h);

    double get_area();   // 底面积
    double get_volume(); // 体积
};