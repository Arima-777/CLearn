#include <stdio.h>
#include <stdlib.h>

 	struct book_description *make_str(void)
{
	enum {max_book_name_len=20, max_author_name_len=20};
	struct book_description
	{
	char name[max_book_name_len];
	char author[max_author_name_len];
	int year, edition_num, pages;
	};
	struct book_description *HON;
	HON = malloc(sizeof(struct book_description));
	printf("Enter the name of the book\n");
	scanf("%s", & (HON->name));
	printf("Enter the name of the author\n");
	scanf("%s", & (HON->author));
	printf("Enter the year\n");
	scanf("%d", & (HON->year));
	printf("Enter the edition number\n");
	scanf("%d", & (HON->edition_num));
	printf("Enter the number of pages\n");
	scanf("%d", & (HON->pages));

	printf("Number of pages is %d\n", HON->pages);

	return 0;
}
