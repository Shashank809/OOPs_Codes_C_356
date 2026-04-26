#include<iostream>
using namespace std;

class ABC
{
public:
   int x=10;
};

int main()
{
    ABC obj;
    ABC *ptr;
    ptr = &obj;
    cout<<obj.x<<endl;
    cout<<ptr->x<<endl;
    return 0;
}
