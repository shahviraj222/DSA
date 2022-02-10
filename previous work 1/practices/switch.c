#include <stdio.h>
int main()
{   //if you dont put break then all is run as wellas default also
    // but below the given case all perform******
    int a = 5;
    switch (a)
    {

    case 2:
    {
        printf("ypun selected 2\n");
        break;
    }   
     case 5:
    {
        printf("you selected 5\n");
    }
    default:
    {
        printf("you selected default\n");
    }
    }
    return 0;
}