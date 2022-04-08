#include<iostream>
using namespace std;
class test
{
	private:
		int x;
	public:
		test(int num)
		{
			x =num;
		}
		int get()
		{
			return x;
		}
};

int main()
{
	test num(7);
	cout<<"The Number is: "<<num.get();
	return 0;
}
