/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.*/

#include<iostream>
using namespace std;

class Box
{
  private:
  int length;
  int width;
  int height;
  int volume;
  public:
  Box()
  {    
    
  }
  Box(int length,int width, int height)
  {
      this->length=length;
      this->width=width;
      this->height=height;
  }

  void acceptBox()
  {
    cout<<"================"<<endl;
    cout<<"Enter legth=";
    cin>>this->length;
    cout<<"Enter width=";
    cin>>this->width;
    cout<<"Enter height=";
    cin>>this->height;
    volume=length*width*height;
  }

  void displayBox()
  {
    cout<<"Volume of Box = "<<volume<<endl;
  }

};

int menu()
{
    int choice;
    cout << "*******************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Add Data" << endl;
    cout << "2. Display Data" << endl;
    
    cout << "Enter your choice = ";
    cin >> choice;
    cout << "*******************" << endl;
    return choice;
}

int main()
{
    Box b(3,5,2);
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            b.acceptBox();
            break;
        case 2:
            b.displayBox();
            break;
        default:
            cout << "Wrong choice entered ...:(" << endl;
            break;
                     }
    }
    cout << "Thank You...:)" << endl;
    return 0;
}    

