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
	e1.id=1159;
	e1.name="Hariharan";
	cout<<e1.id<<endl<<e1.name<<endl;
	return 0;
}
