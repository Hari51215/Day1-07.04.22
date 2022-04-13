#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class student
{
    protected:
        string student_name;
        int student_rollno;

    public: 
        void set_Studentdetails(string name, int rollno)
        {
            student_name = name;
            student_rollno = rollno;
        }
};

class academics : public student
{
    protected:
        string course_name;

    public:
        int biology_mark,CS_mark,chemistry_mark,physics_mark;
        double cutoff_mark=0;

        void set_Academicsdetails(string c_name)
        {
            course_name=c_name;

            if(course_name=="Bio-Maths")
            {
                cout<<"Enter the Biology, Chemistry, Physics Marks:"<<endl;
                cin>>biology_mark>>chemistry_mark>>physics_mark;
                cutoff_mark=biology_mark+((chemistry_mark+physics_mark)/2);
            }
            else if (course_name=="CS-Maths")
            {
                cout<<"Enter the Computer_Science, Chemistry, Physics Marks:"<<endl;
                cin>>CS_mark>>chemistry_mark>>physics_mark;
                cutoff_mark=CS_mark+((chemistry_mark+physics_mark)/2);
            }
            else
            {
                cout<<"Kindly Enter the Valid Course Name as Mentioned Above."<<endl;
                exit (0);
            }
        }
};

class sports
{
    protected:
        string sport_name;
        int training_days;
    
    public:
        double sport_mark=0;

        void set_Sportsdetails(string s_name,int no_session)
        {
            sport_name = s_name;
            training_days = no_session;

            if(training_days==100)
                sport_mark+=50;
            else if (training_days>=80 && training_days<100)
                sport_mark+=40;
            else if (training_days>=60 && training_days<80)
                sport_mark+=30;
            else if (training_days>=40 && training_days<60)
                sport_mark+=20;
            else if (training_days>=20 && training_days<40)
                sport_mark+=10;
            else
                sport_mark+=5;
        }
};

class result: public academics, public sports
{
    public:
        double marks=0;
        char grade;

        void Progress_report()
        {
            marks = cutoff_mark + sport_mark;
            if (marks>225 && marks<=250)
                grade='A';
            else if (marks>200 && marks<=225)
                grade='B';
            else if (marks>175 && marks<=200)
                grade='C';
            else if (marks>150 && marks<=175)
                grade='D';
            else if (marks>125 && marks<=150)
                grade='E';
            else
                grade='F';
        }

        void display_report()
        {
            cout<< "\n_ _ _ Student Progress Report - 2022 _ _ _\n"<<endl;
            cout<< "Student Name : "<<student_name<<endl;
            cout<< "Student Roll number : "<<student_rollno<<endl;
            cout<< "\nStudent Course Name : "<<course_name<<endl;
            cout<< "Student Cutoff Mark in the Academics : "<<cutoff_mark<<endl;
            cout<< "\nStudent opted Sports Name : "<<sport_name<<endl;
            cout<< "Number of Traning Sessions attended by the Student : "<<training_days<<endl;
            cout<< "Student Sports Mark in this year : "<<sport_mark<<endl;
            cout<< "\nCumulative Marks obtained by the Student out of 250 :"<<marks<<endl;
            cout<< "Grade attained by the Student : "<<grade<<endl;
            cout<< "\nA-Excellent\tB-Very Good\tC-Good\tD-Satisfied\tE-Need Improvements\tF-Fail\n"<<endl;
        }
};

int main()
{
    result r1;
    string name,c_name,s_name;
    int rollno,no_session;

    cout<<"Enter the Student Name and Roll Number : ";
    cin>>name>>rollno;
    r1.set_Studentdetails(name,rollno);

    cout<<"Choose the Course Name do you want to learn :"<<endl<<"1. Bio-Maths"<<endl<<"2. CS-Maths"<<endl;
    cin>>c_name;
    r1.set_Academicsdetails(c_name);

    cout<<"Choose the Game of sports, which you're intrested in :"<<endl;
    cin>>s_name;
    cout<<"Number of Training sessions attended by the student (0 to 100) : "<<endl;
    cin>>no_session;    
    r1.set_Sportsdetails(s_name,no_session);

    r1.Progress_report();
    r1.display_report();

    return 0;
}