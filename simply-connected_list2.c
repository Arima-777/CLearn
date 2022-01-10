# include <stdio.h>
# include <stdlib.h>

struct item {
	int digit;
	struct item *next;
};

struct item *int_array_to_list(const int *arr, int len){
	int i;
	struct item *tmp = NULL, *first = NULL;
	for (i=0; i<len; i++){
		tmp = malloc(sizeof(struct item));
		tmp -> digit = arr[i];
		tmp -> next = first;
		first = tmp;
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


int main(){
	enum{length = 10};
	int Array[length] ={21, 212, 25, 24, 28, 21, 22, 25, 28, 210};
	struct item *first_item;
	first_item = int_array_to_list(Array, length);
	return 0;
}
