#include<iostream>
using namespace std;

int main()
{
  int a=10, b=2;

  try
  {
      if(b!=0)
      {
          cout<<"Answer is:"<<a/b<<endl;
      }
      else{throw b;}
  }
  catch(int num)
  {
      cout<<"b is zero!"<<endl;
  }
  return 0;
}

