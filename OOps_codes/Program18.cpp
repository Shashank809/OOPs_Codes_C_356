#include<iostream>
using namespace std;

class Base{
public:
    int marks1;
    int marks2;
 Base(int a, int b)
 {
    marks1=a;
    marks2=b;
    cout<<"Parameterised..."<<endl;
 }

 Base(Base &b1)
 {
    marks1=b1.marks1;
    marks2=b1.marks2;
    cout<<"Copy..."<<endl;

 }
 void display()
 {
  cout<<"1st marks:"<<marks1<<endl;
    cout<<"2nd marks:"<<marks2<<endl;

 }
};

int main()
{
    Base b(2,3);
    Base b1(b);
    b.display();
        b1.display();

}
