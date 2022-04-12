#include<iostream>
using namespace std;

class shape
{
    protected:
        int length,breadth,base;
    public:
        void set_length(int len)
        {
            length=len;
        }
        void set_breadth(int bre)
        {
            breadth=bre;
        }
        void set_base(int bas)
        {
            base=bas;
        }
        virtual int area() = 0;
        virtual int perimeter() = 0;
        
};

class square : public shape
{
    public:
    int area()
    {
        return (length*length);
    }
    int perimeter()
    {
        return (length+length+length+length);
    }
};

class rectangle : public shape
{
    public:
    int area()
    {
        return (length*breadth);
    }
    int perimeter()
    {
        return (2*(length+breadth));
    }
};

class triangle : public shape
{
    public:
    int area()
    {
        return (0.5*length*length);
    }
    int perimeter()
    {
        return (base+length+breadth);
    }
};

int main()
{
    square s;
    s.set_length(2);
    rectangle r;
    r.set_length(4);
    r.set_breadth(5);
    triangle t;
    t.set_length(4);
    t.set_breadth(10);
    t.set_base(2);

    cout<<"Area of the Square : "<<s.area()<<endl;
    cout<<"Perimeter of the Square : "<<s.perimeter()<<endl<<endl;
    cout<<"Area of the Rectangle : "<<r.area()<<endl;
    cout<<"Perimeter of the Rectangle : "<<r.perimeter()<<endl<<endl;
    cout<<"Area of the Triangle : "<<t.area()<<endl;
    cout<<"Perimeter of the Triangle : "<<t.perimeter()<<endl<<endl;
    return 0;
}