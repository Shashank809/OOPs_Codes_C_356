#include<iostream>
using namespace std;

class A
{
public:
    void display(int a)
    {
        cout<<"a="<<a<<endl;
    }
    void display(double b)
    {
        cout<<"b="<<b<<endl;
    }
    void display(int a, double b)
    {
        cout<<"c="<<a<<endl;
        cout<<"d="<<b<<endl;
    }
};

int main()
{
    A ans;
    ans.display(2);
    ans.display(3.2);
    ans.display(4,4.3);
}
