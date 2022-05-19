/*3.c - отображает возраст в днях*/
#include"stdio.h"
int main(void)
{
    int age;
    printf("Enter your age in years:");
    scanf("%d", &age);
    printf("Your age in years is %d and in days is %d", age, age*365);
    return 0;	
}