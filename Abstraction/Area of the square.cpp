#include<iostream>
using namespace std;
class square
{
	private:
		double length;
	public:
		void area(double len)
		{
			length=len*len;
		}
		void display()
		{
			cout<<"The Area of the Square is :"<<length<<endl;
		}
};

int main()
{
	square sq;
	sq.area(12.2);
	sq.display();
	return 0;
}
