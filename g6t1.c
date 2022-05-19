#include <stdio.h>
#define SIZE 26

int main (void)
{
    char buf, Array[SIZE];
    int Index;
    for (buf = 'a' , Index=0; Index < SIZE-1; ++Index , ++buf)
    {
        Array[Index] = buf;
        //printf("%c, ", buf);
    }
    for (Index = 0; Index < SIZE-1; ++Index)
        printf("%c, ", Array[Index]);
    return 0;
}