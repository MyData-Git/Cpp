
/*Q1. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
namespace. Test the functionalities.*/

#include <iostream>
using namespace std;
namespace Nstudents
{
   
    class students
    {
      private:
      int rollno;
      string name;
      double marks;
      public:

      void initStudents()
      {
        cout<<"Initial Data :"<<endl;
        this->rollno=0;
        this->name="---anonymous---";
        this->marks=35;
      }

      void printStudentOnConsole()
      {
         cout<<"RollNo = "<< this->rollno << endl;
         cout<<"Name = "<< this->name<< endl;
         cout<<"Marks = "<< this->marks<< endl;
      }

      void acceptStudentsOnConsole()
      {
         cout<<"****************"<<endl;
         cout<< "Enter the the rollno: ";
         cin>> this->rollno;
         getchar();
         cout<< "Enter the the name: ";
         getline(cin,this->name);
         //getchar();
         cout<< "Enter the the marks: ";
         cin>> this->marks;
       }
    };
}

using namespace Nstudents;
int main()
{
    students s1;
    s1.initStudents();
    s1.printStudentOnConsole();
    s1.acceptStudentsOnConsole();
    s1.printStudentOnConsole();
    return 0;
}



