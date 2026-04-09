#include <iostream>
using namespace std;

class Student {
public:
 int id;
 string name;

 void display();
};

void Student :: display()
{
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
}

int main()
{
    Student s1;
    cin>>s1.id;
    cin>>s1.name;
    s1.display();
}
