#include <stdio.h>

int main(void) {
	int i, grades[5];
	int sum=0; 
	
	//default value of sum is required as it will create error while operating sum+= grades[i];//
	
	float average;
    const int count = 5;
	for(i=0; i<count; ++i){
		printf("Enter number:");
		scanf("%d", &grades[i]);
		printf("\n");
		sum += grades[i];
	}
		average = (float)sum/count;
		printf("Average: %f", average);
	return 0;
}

