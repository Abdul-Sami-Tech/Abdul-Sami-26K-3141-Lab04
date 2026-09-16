#include <stdio.h>
int main(){
	int num1;
	int num2;
	int num3;
	printf("Enter 1st number : ");
	scanf("%d", &num1);
	printf("Enter 2nd number : ");
	scanf("%d", &num2);
	printf("Enter 3rd number : ");
	scanf("%d", &num3);
	int avg = (num1 + num2 + num3) / 3;
	printf("The average if three numbers is : %d", avg);
}