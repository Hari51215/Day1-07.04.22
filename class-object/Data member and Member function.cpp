#include<iostream>
#include<string>
using namespace std;
class test
{
	public:
		int num;
		string name;
		
		void display()
		{
			cout<<"Executing the Test class"<<endl;
			cout<<num<<endl;
			cout<<name<<endl;
			cout<<"Terminating the Test class"<<endl;
		}
};

int main()
{
	cout<<"Executing the Main"<<endl;
	test t;
	t.num=10;
	t.name="Hari";
	t.display();
	cout<<"Terminating the Main"<<endl;
	return 0;
}
