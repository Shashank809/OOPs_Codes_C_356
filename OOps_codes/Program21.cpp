#include<iostream>
using namespace std;

class shape
{
protected:
    float x;
public:
    void getdata(){ cin >> x; }
    virtual float calculatearea() = 0;
};

class square : public shape
{
public:
    float calculatearea()
    {
        return x * x;
    }
};

class circle : public shape
{
public:
    float calculatearea()
    {
        return 3.14 * x * x;
    }
};

int main()
{
    shape* ptr;

    square s;
    circle c;

    cout << "Enter side of square: ";
    s.getdata();
    ptr = &s;
    cout << "Area of square = " << ptr->calculatearea() << endl;

    cout << "Enter radius of circle: ";
    c.getdata();
    ptr = &c;
    cout << "Area of circle = " << ptr->calculatearea() << endl;

    return 0;
}
