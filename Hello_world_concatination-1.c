#include <stdio.h>
#include <stdlib.h>
#include <errno.h>


int string_length (const char *str)
	{
	    const char *p;
	    for (p= str; *p; p++)
	    {  }
	    return p - str;  
	}

void string_copy (char *dest, const char *src)
{
   for(; *src; dest++, src++)
    *dest=*src;
}

int main(int argc, char *argv[])
{
	char *suffix =".txt\0";
	char *buf;
	int First_str_len, Full_length;
	FILE *NewFile;

	First_str_len = string_length (argv[1])-1;
	Full_length = First_str_len + string_length (suffix)+1;
	buf= malloc (Full_length);

	string_copy (buf, argv[1]);
	string_copy (buf+First_str_len+1, suffix);
	buf[Full_length] = '\0';

	NewFile = fopen(buf, "w");
	if(!NewFile)
	{
		perror(buf);
		exit(1);
	}
	fclose(NewFile);
//	printf("%sabr\n", buf);

	free(buf);
	return 0;
}
