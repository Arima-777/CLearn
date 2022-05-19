#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char Check_line(const char * str, char *BIG_Letter);
char GetCapLet ();

int main(void)
{
    int line, prespace, let_counter, let_counter2;
    char current_letter, current_letter2;
    char Letter = GetCapLet();
    printf ("Your letter is %c.\n", Letter);
    int LINES=Letter- 'A'+1;
    for (line=0; line<LINES; line++)
    {
       for (prespace=LINES-line;prespace>0;prespace--)
       {
       printf(" ");
       }
       for (current_letter='A', let_counter=0; let_counter<line+1; current_letter++, let_counter++ )
       {
           printf ("%c", current_letter);
       }
       for (current_letter2='A'+line-1, let_counter2=0; let_counter2<line; current_letter2--, let_counter2++ )
    {
           printf ("%c", current_letter2);
     }   
    printf ("\n");
    }
    return 0;
}

char GetCapLet ()
{
    char BIG_Letter, S_input[12];
    BIG_Letter = '\0';
    while (BIG_Letter == '\0')
    {
        printf("Enter any capital letter. If you decided to stop program enter \"STOP\": ");
        scanf("%s", S_input);
        if (!strcmp (S_input, "STOP"))
        {
            exit (0);
         }
        else
        {
        Check_line(S_input, &BIG_Letter);
        }
    }
    return BIG_Letter;
}

char Check_line(const char *str,char *BIG_Letter)
{
        int Index;
        for ( Index=0; str[Index]; Index++)
        {
            if (('A'<=str[Index]) && (str[Index]<= 'Z'))
            {
            *BIG_Letter = str[Index];
            break;
            break;
            }
    }
}