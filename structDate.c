#include<stdio.h>
#include<conio.h>
void main(){
  clrscr();
  struct date
  {
    int month;
    int year;
    int day;

  };
  struct date today;
  today.month=10;
  today.day=19;
  today.year=2022;
  printf("Today's date is %i/%i/%i", today.day, today.month, today.year);
  return 0;

}