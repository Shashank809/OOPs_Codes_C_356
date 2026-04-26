#include<iostream>
using namespace std;

class base
{
public:
    virtual void show()
    {
        cout << "Base class show()" << endl;
    }
};

class der1 : public base
{
public:
    void show() override
    {
        cout << "Derived class 1 show()" << endl;
    }
};

class der2 : public base
{
public:
    void show() override
    {
        cout << "Derived class 2 show()" << endl;
    }
};

int main()
{
    base* ptr;
    //ptr->show();

    der1 d1;
    der2 d2;

    ptr = &d1;
    ptr->show();   // Calls der1 version

    ptr = &d2;
    ptr->show();   // Calls der2 version

    return 0;
}
