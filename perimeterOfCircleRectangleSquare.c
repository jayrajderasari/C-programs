#include<stdio.h>

void main(){
	float len, bre, rad, perCir, perSqu, perRec;
	printf("Enter Length Breath And Radius");
	scanf("%f", &len);
	scanf("%f", &bre);
	scanf("%f", &rad);
	perCir = 2*3.14*rad;
	perSqu = 4*len;
	perRec= 2*(len+bre);
	
	printf("Perimeter Of Circle: %f \n Perimeter Of Rectangle: %f \n Perimeter Of Square: %f", perCir, perRec, perSqu);
	
}