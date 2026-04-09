#include <iostream>
using namespace std;

class Vehicle
{
 public:
     int speed;

     void showspeed();

};

class Car : public Vehicle
{
public:
    string brand;
};

void Vehicle::showspeed()
{
        cout<<"Speed : "<<speed<<endl;
        //cout<<"Speed : "<<brand<<endl;

}
int main()
{
    Car c1;

    cin>>c1.brand;
    cin>>c1.speed;

            cout<<"Brand : "<<c1.brand<<endl;

    c1.showspeed();

    return 0;
}

