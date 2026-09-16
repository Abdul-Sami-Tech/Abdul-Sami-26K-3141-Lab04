#include <stdio.h>
int main(){
	int marks;
	printf("Enter your marks in percentage : ");
	scanf("%d", &marks);
	if(marks >=50){
		printf("Pass");
	}else {
		printf("Fail");
	}
}