#include <stdio.h>
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	int square = num * num;
	int cube = num * num * num;
	printf("Square of number is : %d\n", square);
	printf("Cube of number is : %d\n", cube);
}