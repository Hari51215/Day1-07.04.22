#include<iostream>
using namespace std;
class zoho
{
	public:
		int id;
};

class employee
{
	public:
		string job_role;
};

class intern : public zoho, public employee
{
	public:
	void display()
		{
			cout<<"Details of the Intern"<<endl;
			cout<<"Zoho ID:"<<id<<endl;
			cout<<"Job Role: "<<job_role<<endl;
		}
};

int main()
{
	intern i1;
	cout<<"Enter the Zoho ID: ";
	cin>>i1.id;
	cout<<"Enter your Job Role : ";
	cin>>i1.job_role;
	i1.display();
	return 0;
}
