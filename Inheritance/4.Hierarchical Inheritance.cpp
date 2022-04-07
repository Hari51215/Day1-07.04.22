#include<iostream>
using namespace std;
class zoho
{
	public:
		int id;
		string job_role;
};

class employee : public zoho
{
	public:
		void display()
		{
			cout<<"Job Role: "<<job_role<<endl;
		}
};

class intern : public zoho
{
	public:
	void display()
		{
			cout<<"Zoho ID:"<<id<<endl;
		}
};

int main()
{
	intern i1;
	employee e1;
	cout<<"Enter the Zoho ID: ";
	cin>>i1.id;
	cout<<"Enter your Job Role : ";
	cin>>e1.job_role;
	cout<<"Details of the Intern"<<endl;
	i1.display();
	e1.display();
	return 0;
}
