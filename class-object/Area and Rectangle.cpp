#include <iostream>
using namespace std;

class Hall
{
    public:
    
    double length;
    double breadth;
    double height;

    double Area()
    {
        return length * breadth;
    }

    double Volume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Hall h1;
    h1.length = 42.5;
    h1.breadth = 30.8;
    h1.height = 19.2;
    
    cout << "Area of Room =  " << h1.Area() << endl;
    cout << "Volume of Room =  " << h1.Volume() << endl;

    return 0;
}
