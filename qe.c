#include <stdio.h>
#include <math.h>

double discrim (double a, double b, double c)
{
	return b*b-4*a*c;
}
int main()
{
	double p, q, r, d;
	int n;
	printf ("Enter a, b and c\n");
	n = scanf("%lf %lf %lf \n", &p, &q, &r );
	if (n != 3)
	{
	       	printf ("Wrong values were entered.\n");
		return 1;
	}
	if (p == 0)
	{
		printf ("It is not a quadratic equalation.\n");
		return 0;
	}
	d = discrim(p, q, r);
	if (d < 0)
	{
		printf ("discrim less then 0\n");
		d = d * (-1);
		d = sqrt(d);
		printf("Solutions are %.5f + i *  %.5f / %.5f and %.5f  -i *  %.5f / %.5f.\n", -q, d, 2*p, -q, d, 2*p);
		return 0;
	}
	d = sqrt(d);
	printf("Solutions are %.5f and %.5f.\n", (-q+d)/(2*p), (-q-d)/(2*p));
	return 0;
}
