#include <stdio.h>
int main(){
	float length;
	float width;
	float area;
	float perimeter;
	printf("Enter length of the Rectangle : ");
	scanf("%f", &length);
	printf("Enter width of the Rectangle : ");
	scanf("%f", &width);
	area = length * width;
	perimeter = 2*(length + width);
	printf("Area of Rectangle is : %.2f\n", area);
	printf("Perimeter of Rectangle is : %.2f\n", perimeter);
}