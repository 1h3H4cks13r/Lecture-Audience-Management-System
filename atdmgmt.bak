#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int count=0;

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
    cout<<"\n Enter Name : ";
    cin >> name;
    cout<<" Enter Register Number : ";
    cin >> regno;
    cout<<" Enter Your Class : ";
    cin >> cls;
    att = '\\';
}

void stud::attend()
{
    cout<<"\n Name : " <<name<<"\tPrevious Attendance : " <<att<<"\n Enter Today's Attendance : ";
    cin>>att;
    if ((att=='a') || (att=='A'))
        att='a';
    else
        att='\\';
}

void stud::dattend()
{
    cout<<"\n Name : " <<name<< "\t Attendance : "<<att << endl;
}

void stud::disp()
{
    cout<< "\n\n Name : " << name << "\t Class : " << cls << "\n Register Number : " << regno << endl;
}

void entry(int n)
{
    int i;
    char ch='y';
    for(i=n;i<50,ch!='n';i++)
    {
        s[i].add();
        cout<<" Do you want to enter another student? (y/n) : ";
        ch=getch();
        cout<<ch<<endl;
    }
    count = i;
}

void markat()
{
    for(int i=0;i<count;i++)
    {
        s[i].attend();
    }
}

void dispat()
{
    for(int i=0;i<count;i++)
    s[i].dattend();
}

void dispdetails()
{
    for(int i=0;i<count;i++)
    s[i].disp();
}

void entry_menu()
{
    system("cls");
    int choice;
    cout << "1.New List\n 2.Add to Existing\n 3.Exit\n\n\n  Choice? ";
    choice=getch() - '0';
    cout<<choice<<endl;
    switch(choice)
    {
        case 1:
        entry(0);
        break;

        case 2:
        entry(count);
        break;
        
        case 3: break;
    }
}

int main()
{
    system("cls");
    int choice;
    cout << "\n 1.Students entry\n 2.Mark Attendance\n 3.Display Attendance\n 4.Details\n 5.Exit\n\n\n  Choice? ";
    choice=getch() - '0';
    cout<<choice<<endl;
    switch(choice)
    {
        case 1:
        entry_menu();
        break;

        case 2:
        markat();
        break;

        case 3:
        dispat();
        getch();
        break;
        
        case 4:
        dispdetails();
        getch();
        break;

        case 5:
        return 0;        
    }
    main();
}