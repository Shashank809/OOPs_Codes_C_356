#include<iostream>
using namespace std;

class base
{
public:
    void showbase()
    {
        cout<<"Base"<<endl;
    }
};

class der : public base
{
public:
    void showderv()
    {
        cout<<"Derived"<<endl;
    }
};

int main()
{
    der d1;
    base* ptr;
    ptr = &d1;
    ptr->showbase();
    //ptr->showderv();
    ((der*)ptr)->showderv(); //typecasting
}
