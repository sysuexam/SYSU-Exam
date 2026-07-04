// 此文件为锁定文件，请勿编辑此文件

#include <iostream>
#include <typeinfo>
#include "Company.hpp"
using namespace std;

int main()
{
    int realId, virtualId;
    cin >> realId >> virtualId;
    Company comp1(realId, virtualId);
    cout << "number of Company objects: " << Company::getNumberOfCompany() << endl;
    cout << "Company1 Id: " << comp1.getId() << endl;

    cin >> realId >> virtualId;
    const Company comp2(realId, virtualId);
    cout << "number of Company objects: " << Company::getNumberOfCompany() << endl;
    cout << "Company2 Id: " << comp2.getRealId() << endl;

    cin >> virtualId;
    comp1.modifyId(virtualId);
    cout << "Company1 Id: " << comp1.getId() << endl;

    {
        cin >> realId >> virtualId;
        Company comp3(realId, virtualId);
        cout << "number of Company objects: " << Company::getNumberOfCompany() << endl;
    }
    cout << "number of Company objects: " << Company::getNumberOfCompany() << endl;

    {
        cin >> realId >> virtualId;
        static Company comp4(realId, virtualId);
        cout << "number of Company objects: " << Company::getNumberOfCompany() << endl;
    }
    cout << "number of Company objects: " << Company::getNumberOfCompany() << endl;

    return 0;
}
