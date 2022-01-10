#include <stdio.h>
#include <stdlib.h>

struct item {
	int digit;
	struct item *next;
};

void delete_int_list (struct item *lst) {
	if(lst) {
		delete_int_list (lst->next);
		free(lst);
	}
}
