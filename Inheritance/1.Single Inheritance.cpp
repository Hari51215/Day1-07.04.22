#include<iostream>
using namespace std;
class zoho
{
	public:
		int id;
};

class employee : public zoho
{
	public:
		string job_role;
		
		void display()
		{
			cout<<"Details of the Employee"<<endl;
			cout<<"Zoho ID:"<<id<<endl;
			cout<<"Job Role: "<<job_role<<endl;
		}
};

int main()
{
	employee emp1;
	cout<<"Enter the Zoho Employee ID: ";
	cin>>emp1.id;
	cout<<"Enter your Job Role : ";
	cin>>emp1.job_role;
	emp1.display();
	return 0;
}
