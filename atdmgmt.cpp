#include<iostream>
#include<fstream>

//using namespace std;

class stud
{
public:
	char name[50], pa;
	int team, std;
	void add();
	void attend();
	void dattend();
	void disp();
};

void stud::add()
{}

void stud::attend()
{}

void stud::dattend()
{}

void stud::disp()
{}

void entry()
{}
void markat()
{}
void dispat()
{}
void dispdetails()
{}


int main()
{
    int choice;
    std::cout << "\n 1.Students entry\n 2.Mark Attendance\n 3.Display Attendance\n 4.Details\n 5.Exit\n\n\n  Choice? ";
    std::cin >> choice;
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