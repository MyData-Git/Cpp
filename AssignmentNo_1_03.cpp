/* Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();*/


#include <iostream>
using namespace std;

class Student
{
private:
    int rollno;
    string name;
    double marks;

public:
    void initStudent()
    {
       rollno=1;
       name="--Anonymous--";
       marks=35;//marks consider out of 100
       cout<<"Initial Data in Student :" <<endl;
       cout<<"RollNo="<<rollno<<endl;
       cout<<"Name="<<name<<endl;
       cout<<"Marks="<<marks<<endl;
    }
    
     void acceptStudent()
    {
        cout << "Enter the rollno = ";
        cin >> rollno;
        cout << "Enter the name = ";
        cin >> name;
        cout << "Enter the marks = ";
        cin >> marks;
    }
    void displayStudent()
    { 
        cout<<"******************"<<endl;
        cout << "RollNo = " << rollno << endl;
        cout << "Name = " << name << endl;
        cout << "Marks = " << marks << endl;
    }
    
};
int menu()
{
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Initial Student Data" << endl;
    cout << "2. Add Student" << endl;
    cout << "3. Display Student" << endl;
    
    cout << "Enter your choice = ";
    cin >> choice;
    cout << "*******************" << endl;
    return choice;
}
int main()
{
    Student s;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            s.initStudent();
            break;
        case 2:
            s.acceptStudent();
            break;
        case 3:
            s.displayStudent();
            break;
        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
                     }
    }
    cout << "Thank you for using our app...:)" << endl;
    return 0;
}    


