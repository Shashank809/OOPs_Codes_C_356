#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Apple";
    string s2 = "Banana";

    int result = s1.compare(s2);
    if(result == 0)
    {
        cout<<"Strings are equal.";
    }
    else if(result < 0)
    {
        cout<<"s2 is greater than s1.";
    }
    else if(result > 0)
    {
        cout<<"s1 is greater than s2.";
    }

    return 0;
}
