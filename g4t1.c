#include <stdio.h>
int main(void)
{
	char Name [15];
	char FamilyN [20];
	printf("Ведите имя: ");
	scanf("%s", Name);
	printf("Ведите фамилию: ");
	scanf("%s", FamilyN);
	printf("%s, %s.", FamilyN, Name);
	return 0;
}