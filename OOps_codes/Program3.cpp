#include <iostream>
using namespace std;
int m = 10;

int main()
{
    int a = 1;
    int m = 5;
    cout<<m<<endl;

    if(a == 1)
    {
        int m = 3;
        cout<<m<<endl;
        cout<<::m<<endl;
    }
}
