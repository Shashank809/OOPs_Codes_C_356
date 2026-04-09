#include<iostream>
using namespace std;

class Base{
 private:
     int x;

 public:
    void setdata(int a);

    int getdata();

};

void Base :: setdata(int a)
{
        x = a;
}

int Base :: getdata()
{
        return x;
}

class Derived : public Base
{
 public :
     void display();

};

void Derived :: display()
  {
         cout<< "Value : "<<getdata()<<endl;
  }

int main()
{
   Derived d;
   d.setdata(9);
   d.display();

   return 0;
}
