#include<iostream>
using namespace std;
class Sum
{
	private:
		double x,y;
	public:
		void add(int a,int b)
		{
			cout<<"Enter two integers: "<<endl;
			x=a;
			y=b;
			cout<<"The Addition of Two Integers are :"<<x+y<<endl;
		}
		
		void add(double a,double b)
		{
			cout<<"Enter two decimal numbers: "<<endl;
			x=a;
			y=b;
			cout<<"The Addition of Two Decimal Numbers are :"<<x+y<<endl;
		}
};

int main()
{
	Sum s1;
	s1.add(5,10);
	s1.add(5.5,10.5);
	return 0;
}
