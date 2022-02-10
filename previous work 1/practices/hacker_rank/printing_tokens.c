#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));
    printf("enter the string\n");
    //scanf("%s", s);             // THIS IS NOT TAKE SPACE ONLY WITHOUT SPACE WORD WILL BE CONSIDER
    scanf("%[^\n]", s); // THIS TAKE ALL THE WORD WITH SPACE..THIS ONLY OFF WHEN "ENTER" KEY
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for (int i = 0; i < 1024; i++)
    {
        if (s[i] == '\0')
        {
            break;
        }

        if (s[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}
