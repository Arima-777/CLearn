#include <stdio.h>
int main(void)
{
	float Height;
	char Name [15];
	printf("Enter your height in inches and name\n");
	scanf ("%f %s", &Height, &Name);
	printf("%s, ваш рост составляет %.2f футов\n", Name, Height/12.05);
	return 0;
}