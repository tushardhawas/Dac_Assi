/*
Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
*/
#include <iostream>
using namespace std;

struct Date
{

  int day, month, year;

  void initDate()
  {
    day = 01;
    month = 01;
    year = 2005;
  }
  void printDateOnConsole()
  {
    cout << day << "/" << month << "/" << year << "/" << endl;
  }
  void acceptDateFromConsole()
  {
    cout << "Enter Day" << endl;
    cin >> day;
    cout << "Enter Day" << endl;
    cin >> month;
    cout << "Enter Day" << endl;
    cin >> year;
  }
  bool isLeapYear()
  {
    if (year % 4 == 0 && year % 100 != 0)
    {
      cout << "is a leap year" << endl;
    }

    else if(year % 100 == 0 && year % 400 == 0)
    {
      cout << "is a leap year" << endl;
    }
    else{

      cout<<"is not a  leap year"<<endl;

    }
  }
}

;

int main()
{

  struct Date d1;
  int check;
  while (check)
  {
    cout << "Press 0 to Exit " << endl
         << " Press 1 for init date " << endl
         << "endlPress 2 for Accept Date" << endl
         << "press 3 for Print Date" << endl;
    cin >> check;

    switch (check)
    {
    case 0:
      break;
    case 1:
      d1.initDate();

      break;
    case 2:
     d1. acceptDateFromConsole();

      break;
    case 3:
      d1.printDateOnConsole();

      break;
    case 4:
      d1.isLeapYear();

      break;

    default:
      printf("please enter a valid  input");
    }
  }
}
