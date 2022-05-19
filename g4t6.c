#include <stdio.h>
#include <string.h>
int main(void)
{
	char Name [10], Surname [10];
	unsigned int NameLength, SurnameLength;
	printf ("Enter your name and surname:\n");
	scanf ("%s %s", &Name, &Surname);
	NameLength= strlen(Name);
	SurnameLength= strlen(Surname);
	printf("%s %s\n%*d %*d\n", Name, Surname, NameLength, NameLength, SurnameLength, SurnameLength);
	printf("%s %s\n%-*d %-*d\n", Name, Surname, NameLength, NameLength, SurnameLength, SurnameLength);
	return 0;
}