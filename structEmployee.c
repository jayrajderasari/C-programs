/* To Feed and Print Employee data*/
#include<stdio.h>
#include<conio.h>
 
struct employee
 {
   char name[100];
   char hireDate[100];
   float salary;
 };

void main(){
  //  clrscr();
  struct employee employee1;
  struct employee employee2;

  //strcpy(employee1.name, "0");
  //  strcpy(employee2.name, "0");

  printf("Enter Name Of Employee 1: ");
  scanf("%s", &employee1.name);
  printf("\nEnter hireDate Of Employee 1: ");
  scanf("%s", &employee1.hireDate);
  printf("\nEnter Salary Of Employee 1: ");
  scanf("%f", &employee1.salary);


  printf("\nEnter Name Of Employee 2: ");
  scanf("%s", &employee2.name);
  printf("\nEnter hireDate Of Employee 2: ");
  scanf("%s", &employee2.hireDate);
  printf("\nEnter Salary Of Employee 2: ");
  scanf("%f", &employee2.salary);

  printf("\n\nEmployee 1: %s %s %f", employee1.name, employee1.hireDate, employee1.salary);
  printf("\nEmployee 2: %s %s %f", employee2.name, employee2.hireDate, employee2.salary);

  return 0;
}