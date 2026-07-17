// 此文件为锁定文件，请勿编辑此文件

#include "Employee.h"

int main()
{
    int n;
    cin >> n;
    int *id = new int[n];
    string *name = new string[n];

    for (int i = 0; i < n; i++)
    {
        cin >> id[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
    }
    Employee emp1(id, name, n);
    Employee emp2(emp1);

    cout << "Employee1 is: " << endl;
    emp1.employeePrint();
    cout << "Employee2 is: " << endl;
    emp2.employeePrint();
    return 0;
}