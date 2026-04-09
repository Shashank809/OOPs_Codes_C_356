#include <iostream>
using namespace std;
void display();
void area(int length,int breadth);

class rectangle{
 public:
  int length;
  int breadth;

 void display()
{
  cout<<length<<endl;
  cout<<breadth<<endl;
}

 void area(int length,int breadth)
 {
     int a;
     a = length*breadth;
     cout<<a<<endl;
 }
 };

 int main()
 {
  rectangle r1;
  cin>>r1.length ;
  cin>>r1.breadth ;
  r1.display();

  r1.area(r1.length, r1.breadth);

  return 0;
 }
