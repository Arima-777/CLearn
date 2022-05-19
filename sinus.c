#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){
	double *Vector;
	int i;
	int DOUB_S = sizeof(double);
	Vector = (double*) malloc(360*DOUB_S);
	for (i=0; i<360; i++)
	    Vector[i] = sin((double)i * 2 * M_PI/360.0);
	for (i=0; i<360; i++)    
	    printf("sin %d= %fl,\n", i+1, Vector[i]);    free(Vector);
	return 0;
}
//с 6 июня четырёхдневка 12к руб. На территрии СИВПИ