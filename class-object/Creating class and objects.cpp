#include<iostream>
using namespace std;
class test
{
	public:
		void run()
		{
			cout<<"Executing the Test class"<<endl;
		}
};

int main()
{
	cout<<"Executing the Main"<<endl;
	test t;
	t.run();
	cout<<"Terminating the Main"<<endl;
	return 0;
}
