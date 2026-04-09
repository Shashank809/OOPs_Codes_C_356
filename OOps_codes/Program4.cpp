#include<iostream>
using namespace std;

 inline double cube(double s)
{
    return s*s*s;
}

int main()
{
    int c = cube(5);
    cout<<c;
    return 0;
}

