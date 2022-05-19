//PRICER.c -- помогает правильно рассчитать цены продуктов питания и избежать последствий нечестной маркетинговой политики

#include <stdio.h>


#define simpleUNDERLINE "______________________________________________________\n"
#define UNDERLINE "________________|_______________|_____________________|\n"
#define STARLINE "\n   ***********\t    ***********\t          ***********\n"


double Cost, Weight;

void GetCost(void)
{
    	scanf("%lf", &Cost);
}

void GetWeight(void)
{
    	scanf("%lf", &Weight);
}

int main(void)
{
	int i; //Счётчик итераций ввода
double Price;
	printf("\n%s   Вас приветствует программа Pricer. Удачных покупок.%s\n\n   Для выхода из программы дважды введите значение 0.\n\n\n\nУкажите стоимость продукта в ₽ и его массу в граммах:\n", STARLINE, STARLINE);
	Cost=1; //Соблюдаем условие для входа в цикл
printf ("%s    Величина    |   Значение \t|\tЦена, ₽/кг    |\n%s", simpleUNDERLINE, UNDERLINE);
	//while (Cost >0)
	for (i=1; Cost>0; i++)
		{
		   printf ("%d. Стоимость, ₽ |   ", i);
		    GetCost();
		    printf ("   Масса, гр    |   ");
		    GetWeight();
		    printf("\b");
		    Price= Cost / Weight*1000;
		    printf("\t\t|\t\t| \t%.2f", Price);
		    //printf("\t\t|\t\t| \t%.2f", Price);
		    printf ("\n%s", UNDERLINE);     
		}
	printf ("\n%s\t\tРабота программы завершена.\n\tТеперь вы готовы сделать правильный выбор.\n%s", simpleUNDERLINE, simpleUNDERLINE);	
	return 0;
}