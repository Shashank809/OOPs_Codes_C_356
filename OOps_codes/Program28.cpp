#include<iostream>
using namespace std;

int main()
{
    int age=15;

    try
    {
        if(age>18){cout << "you are of correct age";}
        else
        {
            throw age;
        }
    }

    catch(int num)
    {
        cout << "Access Denied! you are underage..";
    }

    return 0;
}
