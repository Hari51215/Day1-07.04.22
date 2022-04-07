#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		string student_name;
		int student_rollno;
		int mark1,mark2,mark3;
		double average;
	public:
		void setdata(string sn,int rn,int m1,int m2,int m3)
		{
			student_name=sn;
			student_rollno=rn;
			mark1=m1;
			mark2=m2;
			mark3=m3;
			average=(m1+m2+m3)/3;
		}
		void showdata()
		{
			cout<<"Progress report of the Student"<<endl;
			cout<<"Name of the Student:"<<student_name<<endl;
			cout<<"Roll number of the Student:"<<student_rollno<<endl;
			cout<<"Mark-1 of the student:"<<mark1<<endl;
			cout<<"Mark-2 of the student:"<<mark2<<endl;
			cout<<"Mark-3 of the student:"<<mark3<<endl;
			cout<<"Average mark of the student:"<<average<<endl;
		}
};

int main()
{
	student s1;
	s1.setdata("Hari",1159,80,75,70);
	s1.showdata();
	return 0;
}
