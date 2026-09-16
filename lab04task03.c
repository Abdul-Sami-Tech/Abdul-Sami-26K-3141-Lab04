#include <stdio.h>

int main() {
    char name[50];
    char ch;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    puts("Your full name:");
    puts(name);

    printf("Enter your Name : ");
    scanf(" %c", &ch);

    printf("1st character of your name is : %c\n", ch);

    return 0;
}