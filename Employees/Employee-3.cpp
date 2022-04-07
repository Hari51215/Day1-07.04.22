#include<iostream>
#include<string>
using namespace std;
class employee
{
	int id;
	string name;
	
	public:
		void setdata(int i,string n)
		{
			id=i;
			name=n;
		}
		
		void display()
		{
			cout<<endl<<"Employee Details"<<endl;
			cout<<"Id :"<<id<<endl;
			cout<<"Name :"<<name<<endl;
		}
};
int main()
{
	employee e1;
	e1.setdata(100,"Hari");
	e1.display();
	return 0;
}
