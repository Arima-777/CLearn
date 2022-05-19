#include <stdio.h>
int main(void)
{
	float Speed, FileSize;
	printf("Введите скорость загрузки в Мбит/с и размер файла в Мб\n");
	scanf("%f %f", &Speed, &FileSize);
	printf("При скорости загрузки %.2f мегабит в секунду файл размером %.2f мегабайт загружается за %.2f секунд (ы).", Speed, FileSize, FileSize/(Speed/8));
	return 0;
}