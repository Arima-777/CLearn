#include <stdio.h>

int main ()
{
	int i;
for (i=0; i<10; i++)
{
	if (i==5)
	goto HELLO;
	printf("\n %d", i);
}

HELLO: printf ("\n Hello World I am In!");
return 0;
}
