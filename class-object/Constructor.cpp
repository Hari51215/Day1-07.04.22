#include<iostream>
using namespace std;
class test
{
	public:
		int num;
		string name;
		run()
		{
			cout<<"Executing Default Constructor"<<endl;
		}
		run(int num)
		{
			cout<<"Executing Parameterized Constructor"<<endl;
			cout<<num<<endl;
		}
		run(int num,string name)
		{
			cout<<"Executing Parameterized Constructor"<<endl;
			cout<<num<<endl<<name<<endl;
		}
};

int main()
{
	cout<<"Executing the Main"<<endl;
	test t;
	t.run();
	t.run(10);
	t.run(10,"Hari");
	cout<<"Terminating the Main"<<endl;
	return 0;
}
