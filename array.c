#include <stdio.h>

int main ()
{
	char Array [] = {'h', 'e', 'l', 'l','o'};
	char Array2 [] = {'W', 'o', 'r', 'l','d'};
	char *PArray [3] = {Array, Array2, NULL };
	char *p = Array;
	int i =  sizeof(Array) / sizeof (Array[0]);
	int n=0;
	printf("Size of array is %d\n and its third element is %c\n", i, Array[2]);
	while(PArray[n])
	{
		printf("PArray element address is %p\n", &PArray[n]);
		n++;
	}
	printf("PArray element is %c\n", PArray[2]);
	printf("P is %p\t and p store address of %c", p, *p);
	return 0;
}
