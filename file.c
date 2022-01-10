#include <stdio.h>
#include <errno.h>

int main(int *arc, char **argv)
{
/*FILE *f;
f = fopen("delete.me", "w");
if (f==NULL) 
	{
	perror("delete.mr");
	exit (1);
	//break;
	//return 1;
	}
	fclose(f);*/
char str[32];
int n=5;
int n2;
sprintf(str, "%d", n);
printf("[%s]\n", str);
n2=str[0];

printf("[%d]\n", n2);

	return 0;
}
