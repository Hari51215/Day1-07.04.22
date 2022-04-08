#include<iostream>
using namespace std;
class Add
{
	private:
		int x,y;
	public:
		void calculation()
		{
			cout<<"Enter First and Second Number: ";
			cin>>x>>y;
			cout<<"Sum of two numbers are : "<<x+y<<endl;
		}
};
int main()
{
	Add a;
	a.calculation();
	return 0;  
}
