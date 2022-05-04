#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

//int count=0;

class stud
{
public:
	char att;
    string name, cls, regno;
	void add();
	void attend();
	void dattend();
	void disp();
} s;

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
    char ch='y';

ofstream file_obj;
if(!n){
cout<<n;
file_obj.open("Input.txt", ios::out);
}else
file_obj.open("Input.txt", ios::app);

    while(ch!='n')
    {
        s.add();
file_obj.write((char*)&s, sizeof(s));
        cout<<" Do you want to enter another student? (y/n) : ";
        ch=getch();
        cout<<ch<<endl;
    }

}

void markat()
{

ifstream file_obj;
file_obj.open("Input.txt", ios::in);

ofstream file_obj2;
file_obj2.open("Input2.txt", ios::out);
file_obj.read((char*)&s, sizeof(s));
while (!file_obj.eof())
{
    s.attend();
file_obj2.write((char*)&s, sizeof(s));
file_obj.read((char*)&s, sizeof(s));
}

file_obj.close();
file_obj2.close();

file_obj.open("Input2.txt", ios::in);
file_obj2.open("Input.txt", ios::out);

string str;

file_obj >> str;
file_obj2 << str;

/*while(!file_obj.eof())
{
file_obj.read((char*)&s, sizeof(s));
file_obj2.write((char*)&s, sizeof(s));
s.dattend();getch();
}*/

}

void dispat()
{

ifstream file_obj;
file_obj.open("Input.txt", ios::in);
file_obj.read((char*)&s, sizeof(s));
while (!file_obj.eof())
{
    s.dattend();
file_obj.read((char*)&s, sizeof(s));
}

}

void dispdetails()
{

ifstream file_obj;
file_obj.open("Input.txt", ios::in);
file_obj.read((char*)&s, sizeof(s));
while (!file_obj.eof())
{
    s.disp();
file_obj.read((char*)&s, sizeof(s));
}

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
        entry(1);
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