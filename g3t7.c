#include <stdio.h>
int main(void)
{
	float SM=2.5;
	float Height;
	printf("Введите рост в дюймах: ");	scanf("%f", &Height);
	printf("Рост в сантиметрах составляет: %g см (Сокращённая запись с фиксированной запятой)\n", Height*SM);
	return 0;
}