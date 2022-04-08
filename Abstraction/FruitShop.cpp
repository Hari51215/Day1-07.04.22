#include<iostream>
using namespace std;
class fruitshop
{
	private:
		int quantity;
		double price;
	
	public:
		void apple()
		{
			cout<<endl<<"How many apples do you want..?";
			cin>>quantity;
			price=quantity*75;
			cout<<"Total Price of the Apple:"<<price<<endl;
		}
		void banana()
		{
			cout<<endl<<"How many banana do you want..?";
			cin>>quantity;
			price=quantity*5;
			cout<<"Total Price of the Banana:"<<price<<endl;
		}
		void orange()
		{
			cout<<endl<<"How many orange do you want..?";
			cin>>quantity;
			price=quantity*50;
			cout<<"Total Price of the Orange:"<<price<<endl;
		}
};

int main()
{
	fruitshop fruit;
	fruit.apple();
	fruit.banana();
	fruit.orange();
	return 0;
}
