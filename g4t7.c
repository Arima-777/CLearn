#include <stdio.h>
#include <float.h>

int main(void)
{
	double Val0= 1.0/3.0;
	float Val1= 1.0/3.0;

	printf("%.4f %.12f %.16f\n", Val0, Val0, Val0);
	printf("%.4f %.12f %.16f\n", Val1, Val1, Val1);
	printf ("%f, %f.", FLT_DIG, DBL_DIG);
	return 0;
}