// 此文件为锁定文件，请勿编辑此文件

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    Employee(int *id, string *name, int len);
    Employee(const Employee &other);
    ~Employee();

    void employeePrint()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "|" << id_list[i] << "|" << name_list[i] << "|" << endl;
        }
    }

private:
    int *id_list;
    string *name_list;
    int size;
};

#endif