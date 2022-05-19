#include<stdio.h>

int string_length(const char *str);

int main(void)
{
    char String[20];
    int len;
    int calculated_len;
    printf("Enter a short string:\n");
    len = scanf("%s", &String);
    printf("The length is %d.", string_length(String));
    return 0;
}

int string_length(const char *str)
{
    const char * end;
    for (end = str; *end; end++);
    return end-str;
}
