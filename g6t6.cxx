#include "stdio.h"
int main(int argc, char *argv[])
{
	int currentDigit;
	for (currentDigit =(*argv[1]-'0'); currentDigit <=(*argv[2]-'0'); currentDigit++)
	{
		printf("%d\t%d\t%d\n", currentDigit, currentDigit* currentDigit,  currentDigit* currentDigit*currentDigit);
	}
	return 0;
}