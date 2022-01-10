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

char* concatenation(const char *name, const char *suffix)
	{
	char *buf;
	int First_str_len, Full_length;
	First_str_len = string_length (name)-1;
	Full_length = First_str_len + string_length (suffix)+1;
	buf= malloc (Full_length);
	string_copy (buf, name);
	string_copy (buf+First_str_len+1, suffix);
	buf[Full_length] = '\0';
	return buf;
	}

int main(int argc, char *argv[])
{
	char *buffer;
	char *suffix =".txt\0";
	FILE *NewFile;
	buffer = concatenation(argv[1], suffix);
	NewFile = fopen(buffer, "w");
	if(!NewFile)
	{
		perror(buffer);
		exit(1);
	}
	fclose(NewFile);
	free(buffer);
	return 0;
}
