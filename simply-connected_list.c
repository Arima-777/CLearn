#include <stdio.h>
#include <stdlib.h>

struct item {
	int digit;
	struct item *next;
 };

struct item *int_array_to_list(const int *arr, int len) {
	struct item *first = NULL, *last = NULL, *tmp;
	int i;
	for (i=0; i<len; i++) {
		tmp = malloc(sizeof(struct item));
		tmp->digit = arr[i];
		tmp->next = NULL;
		if (last) { 
			last->next = tmp;
			last=last->next;
		} else {
			first = last = tmp;	
		}	
	}	
	return first;
}

int checker(struct item *chain, int l){
	int i;
	struct item *checkPointer = chain;
	if (checkPointer){
		for (i=0; i<l; i++){ 
			printf("%d\n", checkPointer->digit);
			checkPointer = checkPointer->next;
		}
		return 0;
	} else {
		return 1;
	}
}	

int main(void)
{
	enum {length=10};
	int Array[length] = {1, 12, 5, 4, 8, 1, 2, 5, 8, 10};
	struct item *first_item = NULL;
	first_item= int_array_to_list (Array, length);
	if(!checker(first_item, length))
		printf("List is empty");
	return 0;
}
