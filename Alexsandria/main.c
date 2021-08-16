#include <stdio.h>
#include <locale.h>


int GetImage()
{
	printf("Please, enter a description of a scroll\n Name is ");
	return 0;
}
int main()
{
	enum typeOfScroll { book, compendium, guide };

	struct Image{ //New type's defenition
	char Name[20];
	char Author[20];
	int year;
	int editionNumber;
	int numberOfPages;
	char Format[5];
	enum typeOfScroll;
	char Link[30];
	}


	setlocale(LC_ALL, "Rus");
	int GetIErrorCode;
	GetIErrorCode=GetImage();
	return 0+GetIErrorCode;
}

