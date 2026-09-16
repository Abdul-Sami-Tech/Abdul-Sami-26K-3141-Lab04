#include <stdio.h>
int main(){
	int No_of_late_days;
	int fine;
	printf("Enter how may days you was late : ");
	scanf("%d", &No_of_late_days);
	
	if(No_of_late_days == 0){
		printf("No fine");
	} else if (No_of_late_days > 0 && No_of_late_days <= 5){
		printf("Fine : Rs. 50");
	} else if (No_of_late_days > 5 && No_of_late_days <= 10){
		printf("Fine : Rs. 100");
	} else{
		printf("Fine : Rs. 200");
	}
}