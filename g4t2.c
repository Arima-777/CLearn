#include <stdio.h>
#include <string.h>
int main(void)
{
	char Name [15];
	unsigned int Width;
	//char FamilyN [20];
	printf("Ведите имя: ");
	scanf("%s", Name);
	printf("\"%s\"\n", Name);
	printf("\"%20s\"\n", Name);
	printf("\"%20-s\"\n", Name);
	printf("\"%s\"\n", Name);
	Width=3+strlen(Name);
	printf("\"%*s\"\n", Width, Name);
	return 0;
}