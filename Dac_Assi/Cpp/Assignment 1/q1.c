/*
Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);
*/

#include <stdio.h>

struct Date
{
  int day;
  int month;
  int year;
};
void initDate(struct Date *ptrDate)
{
  ptrDate->day = 01;
  ptrDate->month =02;
  ptrDate->year =2005;
  printf("date is initiliaze\n");
;}

void printDateOnConsole(struct Date *ptrDate)
{
  printf("%d / %d /%d  ", ptrDate->day,
         ptrDate->month,
         ptrDate->year);
  printf("thank you \n");
}
void acceptDateFromConsole(struct Date *ptrDate)
{
  printf("please enter day  month and year \n");
  scanf("%d %d %d", &ptrDate->day, &ptrDate->month, &ptrDate->year);
}

int main()
{

  struct Date d1;
  int check = 1;
  while (check)
  {

    printf("Press 0 to Exit \n Press 1 for init date \n Press 2 for Accept Date \n press 3 for Print Date \n");
    scanf("%d", &check);

    switch (check)
    {
    case 0:
      break;
    case 1:
      initDate(&d1);

      break;
    case 2:
      acceptDateFromConsole(&d1);

      break;
    case 3:
      printDateOnConsole(&d1);

      break;

    default:
      printf("please enter a valid  input");
    }

  }
  return 0;
}