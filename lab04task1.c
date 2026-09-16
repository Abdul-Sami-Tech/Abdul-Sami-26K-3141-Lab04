#include <stdio.h>
int main(){
	float marks;
	float family_income;
	printf("Enter your marks in percentage : ");
	scanf("%f", &marks);
	printf("Enter you fimly income : ");
	scanf("%f", &family_income);
	if(marks >= 80 || family_income <= 50000){
		printf("your are eligible for scholarship");
	}else {
		printf("you are not eligible for Scholarship");
	}
}