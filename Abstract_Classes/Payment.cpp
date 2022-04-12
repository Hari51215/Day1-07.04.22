#include<iostream>
#include<string>
#define salary 2350
#define stipend 500
using namespace std;

class zoho
{
    protected:
        string name;
        int id,working_days;
    public:
        void set_name(string name1)
        {
            name=name1;
        }
        void set_id(int id)
        {
            this->id=id;
        }
        void set_days(int days)
        {
            working_days=days;
        }
        virtual int payment() = 0;
};

class emplyoee : public zoho
{
    public:
    int payment()
    {
        return (working_days*salary);
    }
};

class intern : public zoho
{
    public:
    int payment()
    {
        return (working_days*stipend);
    }
};

int main()
{
    emplyoee e;
    intern i;

    e.set_name("Ram");
    e.set_id(1001);
    e.set_days(29);

    i.set_name("Hari");
    i.set_id(1159);
    i.set_days(30);

    cout<<"Monthly Salary of the Zoho Employee : "<<e.payment()<<endl;
    cout<<"Stipend of the Zoho summer intern : "<<i.payment()<<endl;

    return 0;
}