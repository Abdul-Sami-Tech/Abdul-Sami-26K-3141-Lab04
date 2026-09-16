#include <stdio.h>
int main(){
	float temp_in_celsius;
	float temp_in_fahrenheit;
	printf("Enter temprature in celsius scale : ");
	scanf("%f", &temp_in_celsius);
	temp_in_fahrenheit = (temp_in_celsius * 9/5) + 32;
	printf("Temprature in fahrenheit scale is : %.2f\n", temp_in_fahrenheit);
}