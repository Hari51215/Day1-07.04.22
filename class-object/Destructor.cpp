#include<iostream>
using namespace std;
class test
{
	public:
		int num;
		string name;
		
		run(int num,string name)
		{
			cout<<"Executing the Constructor"<<endl;
			cout<<num<<endl<<name<<endl;
		}
		~test()
		{
			cout<<"Executing the Destructor"<<endl;
		}
};

int main()
{
	cout<<"Executing the Main"<<endl;
	test t;
	t.run(1,"ZOHO");
	cout<<"Terminating the Main"<<endl;
	return 0;
}
