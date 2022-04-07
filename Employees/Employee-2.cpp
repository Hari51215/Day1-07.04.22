#include<iostream>
#include<string>
using namespace std;
class employee
{
	public:
		int id;
		string name;
		
		void setdata()
		{
			cout<<"Enter the Employee ID: ";
			cin>>id;
			cout<<"Enter the Employee Name: ";
			cin>>name;
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
	e1.setdata();
	e1.display();
	return 0;
}
