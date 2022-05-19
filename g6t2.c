#include <stdio.h>
#define NUMBER 5

int main(void)
{
	int Counter, Counter2;
	for (Counter = 1; Counter < NUMBER+1; Counter++)
	{
	    for (Counter2 = 0; Counter2 < Counter; Counter2++)
	        printf("$");
	    printf("\n");
	}
	return 0;
}
