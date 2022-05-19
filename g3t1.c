#include"stdio.h"
int main(void)
{
	int big=2147483647;
	float max=3.402823e38;
	printf("int big +1=%d\n", big+1);
	printf("int max +1=%f\n", max+1);
	printf("int max -3=%f\n", max-3);
	return 0;
}