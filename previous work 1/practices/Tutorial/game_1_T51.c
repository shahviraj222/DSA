#include <stdio.h>
#include <stdlib.h>
#include <time.h>
static int contplyer = 0;
static int contcomp = 0;
static int contgame = 0;
int genrate_numbar()
{
    int a;
    srand(time(NULL));
    a = rand() % 100;
    contgame++;
    return a;
}
giveresult(char a, char b, char *name[50])
{
    if (a == 'r' && b == 'p')
    {
        printf("%s is win", name);
        contplyer++;
    }
    else if (a == b)
    {
        printf("tie both choose same");
    }
    else if (a == 'r' && b == 's')
    {
        printf("computer is win");
        contcomp++;
    }
    else if (a == 'p' && b == 'r')
    {
        printf("computer is win");
        contcomp++;
    }
    else if (a == 'p' && b == 's')
    {
        printf("%s is win", name);
        contplyer++;
    }
    else if (a == 's' && b == 'p')
    {
        printf("computer is win");
        contcomp++;
    }
    else if (a == 's' && b == 'r')
    {
        printf("%s is win", name);
        contplyer++;
    }

    return 0;
}
int main()
{
    int b;
    char a[50];
    char com, player;
    b = genrate_numbar();
    printf("the out put number is%d", b);
    printf("***********$$$$$$$$$$WELCOME TO PLAY STATION POWERED BY VIRAJ***********$$$$$$$$$$");
    printf("\nThis game is very old but give you happness");
    printf("\nPLAY Rock, Paper, Scissors LET'S ROCK");
    printf("\nEnter your name:");
    scanf("%s", &a);
    getchar();
    printf("\n***Rules****\n");
    printf("1.for selecting rock=press'r'\n2.for selecting papper=press'p'\n3.for selecting scissor=press's'");
    if (b < 34)
    {
        com = 'r';
    }
    else if (b > 34 && b < 66)
    {
        com = 's';
    }
    else if (b > 66)
    {
        com = 'p';
    }
   // printf("computer responese %c", com);
    printf("\nEnter your response");
    scanf("%c", &player);
    getchar();
    giveresult(com, player, &a);
    printf("\nif you want play again print'c'");
    char x;
    scanf("%c", &x);
    if (x =='c')
    {
        main();
    }
    else
    {
        printf("thak you for playing");
        if (contcomp < contplyer)
        {
            printf("\n%s is winner and your score %d outoff %d match\n", a, contplyer, contgame);
        }
        else if(contplyer==contcomp)
        {
            printf("\nMatch tied both are winner\n");
        }
        else 
        {
            printf("\ncomputer is winner your score is %d\n",contplyer);
        }
    }

    return 0;
}