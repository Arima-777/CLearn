#include <stdio.h>

int my_abs(int x) {

  // для примера возьми 1

  int first_value = x >> 0x1F; // это 31 т.к int = 4 байта

  int second_value = first_value ^ x;

  second_value -= first_value;

  return second_value;
}

int main (void){
	printf("%d\n", my_abs(1));
	return 0;
}

