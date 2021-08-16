#include <stdio.h>

int main()
{
	int i, n, MyFirstArray[20];	//New varriables and array are made
	printf("Enter 20 values\n");	//Request of 20 array's values entering

	for (i=0; i<=19; i++)		//Entering values in the loop
	{
		scanf("%d",&n); 
		MyFirstArray[i]= n;
	}

	int *p;
	p = &MyFirstArray[7];

	for (i=0; i<=19; i++)		//Printing values in the loop

{
		printf("%d, ", MyFirstArray[i]);
}

	printf("%d, ", *p);
	return 0;
}
