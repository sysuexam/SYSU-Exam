// 此文件为锁定文件，请勿编辑此文件

#ifndef Company_HPP
#define Company_HPP
class Company
{
public:
    Company(int r, int v);
    ~Company();
    int getRealId() const;
    int getId();
    void modifyId(int newVirtualId);
    static int getNumberOfCompany();

private:
    const int realId;
    int virtualId;
    static int numberOfCompany; // count the number of Company objects
};

#endif