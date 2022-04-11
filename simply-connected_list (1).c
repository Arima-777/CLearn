#include <stdio.h>
#include <stdlib.h>
struct item *int_array_to_list(const int *arr, int len)
{
	struct item *first = NULL, *last = NULL, *tmp;
int i;
for (i=0; i<len; i++)
	{
tmp = malloc(sizeof(struct item));
tmp->digit = arr[i];
tmp->next = NULL;
if (last)
{ 
last->next = tmp;
last=last->next;
}	else {
first = last = tmp;	
}	
	}	
	return first;
}

void checker(struct item *chain, int l){
int i;
for (i=0; i<l; i++) 
printf("%d\n", chain->digit);
}	
}

int main(int argc, char *argv[])
{
enum {length=10};
int Array[length] = {1, 12, 5, 4, 8, 1, 2, 5, 8, 10};
struct item {
	int digit;
	struct item *next;
	 };
struct item *first_item = NULL;
first_item= int_array_to_list (Array, length);
checker(first_item, length);
return 0;
}
