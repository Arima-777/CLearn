#include"stdio.h"
int main(void)
{
	int Symbol;
	printf("Please, enter a number 0<n<128: ");
	scanf("%d", &Symbol);
	printf("%d, %c.", Symbol, Symbol);
	return 0;
}