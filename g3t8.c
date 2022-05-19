#include <stdio.h>
int main(void)
{
	float cups;
	float pints;
	float ounce;
	float tablespoons;
	float teaspoons;
	printf("Введите объём в чашках: ");
	scanf("%f", &cups);
	pints = cups/2;
	ounce=cups*8;
	tablespoons=ounce*2;
	teaspoons=tablespoons*3;
	printf("Указанный объём составляет: %g пинт\n\t\t%g унций\n\t\t%g столовых ложек\n\t\t%g чайных ложек", pints, ounce, tablespoons, teaspoons);
	return 0;
}