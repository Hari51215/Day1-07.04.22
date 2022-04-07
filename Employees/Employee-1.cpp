#include<iostream>
#include<string>
using namespace std;
class employee
{
	public:
		int id;
		string name; 
};
int main()
{
	employee e1;
	cout<<"Enter the Employee ID: ";
	cin>>e1.id;
	cout<<"Enter the Employee Name: ";
	cin>>e1.name;
	cout<<endl<<e1.id<<endl<<e1.name<<endl;
	return 0;
}
