#include <iostream>
using namespace std;

void area(int l=5,int b=4);

int main()
{
  area();
  area(6);
  area(6,7);

  return 0;
}

void area(int l,int b)
{
 float area = l*b;
 cout<<"Area:"<<area<<endl;
}
