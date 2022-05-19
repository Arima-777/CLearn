#include <stdio.h>
#define SIZE 6

int main(void)
{
	char Letter;
	int Cnt1, Cnt2;
	
	for (Cnt1= 1; Cnt1 < SIZE+1; Cnt1++)
	{
	    for (Letter = 'F', Cnt2 = 0; Cnt2<Cnt1; --Letter, ++Cnt2)
	    {
	        printf("%c", Letter);
	    }
	    printf("\n");
	}
	
	return 0;
}