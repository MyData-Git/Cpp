      /* Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();*/
 
 
 
#include <iostream>
using namespace std;

class Date
{   private:
    int day;
    int month;
    int year;
    
    public:
    void initDate()
    {
       day=23;
       month=11;
       year=2023;
       cout<<"Initial Date =" <<day <<"/" <<month <<"/" <<year <<endl;
    }
    
    void acceptDateFromConsole()
    {
       cout<<"Enter day="<<endl;
       cin>>day;
       cout<<"Enter month="<<endl;
       cin>>month;
       cout<<"Enter year="<<endl;
       cin>>year;
    }

    void printDateOnConsole()
    {   cout<<"**************"<<endl;
        cout<<"Date =" <<day <<"/" <<month <<"/" <<year <<endl;
    }

     void isLeapYear()
    {     
      if ( year%400 == 0)      
      cout<<year <<" is a leap year"<<endl;  
        
      else if ( year%100 == 0)      
      cout<<year <<" is a not leap year"<<endl;
      
      else if ( year%4 == 0 )      
      cout<<year <<" is a leap year"<<endl;
    
      else      
      cout<<year <<" is a not leap year"<<endl;      
    }

   
};


int main()
{
    class Date d1;
    d1.initDate();
    d1.acceptDateFromConsole();
    d1.printDateOnConsole();
    d1.isLeapYear();
    return 0;
}

     