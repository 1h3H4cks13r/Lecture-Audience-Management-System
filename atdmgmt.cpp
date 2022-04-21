#include<iostream>
#include<fstream>

using namespace std;

class stud
{
public:
	char att;
    string name, cls, regno;
	void add();
	void attend();
	void dattend();
	void disp();
} s[50];

void stud::add()
{
    cout<<"Enter Name : ";
    cin >> name;
    cout<<"Enter Register Number : ";
    cin >> regno;
    cout<<"Enter Your Class : ";
    cin >> cls;
    att = '\\';
}

void stud::attend()
{
    cout<<"Name : " <<name<<" Previous Attendance : " <<att<<"\n Enter Today's Attendance : ";
    cin>>att;
}

void stud::dattend()
{
    cout<<"Name : " <<name<< "\n Attendance : "<<att;
}

void stud::disp()
{
    name, cls, regno;
}

void entry()
{
    int i;
    char ch='y';
    for(i=0;i<50,ch!='n';i++)
    {
        s[i].add();
        cout<<"Do you want to enter another student? (y/n) : ";
        cin>>ch;
    }
}

void markat()
{}
void dispat()
{}
void dispdetails()
{}


int main()
{
    int choice;
    cout << "\n 1.Students entry\n 2.Mark Attendance\n 3.Display Attendance\n 4.Details\n 5.Exit\n\n\n  Choice? ";
    cin >> choice;
    switch(choice)
    {
        case 1:
        entry();
        break;

        case 2:
        markat();
        break;

        case 3:
        dispat();
        break;
        
        case 4:
        dispdetails();
        break;

        case 5:
        return 0;        
    }
}