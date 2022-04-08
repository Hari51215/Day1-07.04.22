#include<iostream>
using namespace std;
class parent
{
	public:
		double x,y;
		void print()
		{
			cout<<"Parent Class"<<endl;
		}
};

class child : public parent
{
	public:
		void print()
		{
			cout<<"Child Class"<<endl;
		}	
};

int main()
{
	parent *p;
	child obj;
	p=&obj;
	p->print();
	return 0;
}
