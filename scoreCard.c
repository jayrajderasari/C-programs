#include <stdio.h>
/* To create a progam evaluating total marks and percentage*/
int main() {
 float physics, chemistry, maths, total, percentage;
  printf("Please enter your Physics marks");
  scanf("%f",&physics); //Physics marks

  printf("\nPlease enter your Chemistry marks");
  scanf("%f",&chemistry);   //Chemistry marks

  printf("\nPlease enter your Maths marks");
  scanf("%f",&maths);   //Maths marks

  total=(physics+maths+chemistry); //Total equation
  percentage=(total/300)*100; //Percentage equation

  printf("\nTotal: %f",total); //Total marks

  printf("\nPercentage: %f",percentage); //Percentage
}
