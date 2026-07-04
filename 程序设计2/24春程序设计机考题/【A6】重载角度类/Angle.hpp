// 此文件为锁定文件，请勿填写此文件

#ifndef ANGLE_HPP
#define ANGLE
#include <iostream>
using namespace std;

class Angle
{
private:
    int degree; // 度
    int minute; // 分
    int second; // 秒
public:
    Angle() : degree(0), minute(0), second(0) {}
    Angle(int deg, int min, int sec) : degree(deg), minute(min), second(sec) {}
    friend Angle operator+(const Angle &a, const Angle &b);
    friend Angle operator-(const Angle &a, const Angle &b);
    friend istream &operator>>(istream &is, Angle &ang);
    friend ostream &operator<<(ostream &os, const Angle &ang);
    bool operator>(const Angle &ang);
    bool operator<(const Angle &ang);
    bool operator==(const Angle &ang);
};
#endif