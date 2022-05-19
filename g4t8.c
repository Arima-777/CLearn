#include <stdio.h>
#define LinG 3.785
#define KMinM 1.609

int main(void)
{
	float miles, gallons, mpg;
	printf("Enter distance in miles and quantity of fuel in gallons.\n");
	scanf ("%f %f", &miles, &gallons);
	mpg= miles/gallons;
	printf ("This wehicles driving is %.1f mpg (equivalent to %.1f litres/100km.\n", mpg, LinG*100/(mpg*KMinM));	
	return 0;
}