#include<iostream>
using namespace std;

class Base
{
private:
    int x;

public:
    Base()
    {
        cin>>x;
    }

    friend class Derived;
};

class Derived
{
public:
    void display(Base b)
    {
        cout<<"Value : "<<b.x<<endl;
    }
};

int main()
{
    Derived d;
    Base b;
    d.display(b);
}
