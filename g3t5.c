#include <stdio.h>
int main(void)
{
	float SecInYear=31560000;
	float age;
	printf("Введите ваш возраст в годах: ");
	scanf("%f", &age);
	printf("Вы прожили не менее: %f секунд (Запись с фиксированной запятой)\n", age*SecInYear);
	printf("Экспоненциальная форма записи: %e\n", age*SecInYear);
	printf("Вы прожили не менее: %g секунд (Сокращённая запись с фиксированной запятой)\n", age*SecInYear);
	printf("Вы прожили не менее: %.2f секунд (Запись с фиксированной запятой и указанием количества символов после запятой)\n", age*SecInYear);
	return 0;
}