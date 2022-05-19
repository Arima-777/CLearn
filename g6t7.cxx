#include <stdio.h>
int main(int argc, char *argv[])
{
	int input, i;
	char c, Array[22];
	for (i=0; EOF!=(input=getchar()); i++)
	{
		if('\n' != input)
			Array[i] = (char) input;
			else break;
	}
	Array[++i] = '\n';
	for (i--; i>=0; i--)
		putchar(Array[i]);
	return 0;
}