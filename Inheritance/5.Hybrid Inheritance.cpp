#include<iostream>
using namespace std;
class zoho
{
	public:
		int id;
		string job_role;
};

class employee
{
	public:
		double salary;
};

class intern : public zoho
{
	public:
		double stipend;
	void display()
		{
			cout<<"Zoho ID:"<<id<<endl;
			cout<<"Job_Role:"<<job_role<<endl;
			cout<<"Stipend:500/day"<<endl;
		}
};

class salary : public zoho, public employee
{
	public:
	void display()
		{
			cout<<"Zoho ID:"<<id<<endl;
			cout<<"Job_Role:"<<job_role<<endl;
			cout<<"Salary:8.4 LPA"<<endl;
		}			
};

int main()
{
	intern i1;
	salary s1;
	cout<<"Enter the Zoho ID: ";
	cin>>i1.id;
	cout<<"Enter your Job Role : ";
	cin>>i1.job_role;
	cout<<"Details of the Intern"<<endl;
	i1.display();
	cout<<"Details of the Employee"<<endl;
	s1.display();
	return 0;
}
