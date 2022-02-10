#include <stdio.h>
int arr[10];
int billamount;
int totalavairoom, total, pirce;
int roomno[10];
static int booked;
total = 10;

int avairoomnac = 8, avairoomac = 2;
int menu()
{
    totalavairoom = total - booked;
    printf("\n\nMENU\n \n");
    for (int i = 0; i < 8; i++)
    {
        roomno[i] = i + 1;
    }
    roomno[8] = 101;
    roomno[9] = 102;

    printf("Colum No\tRoom No\t\tPrice\t\tType of Room\t\tStatus\n\n");

    for (int i = 0; i < 8; i++)
    {
        int q = 1;
        if (arr[i] == 1)
        {
            q = 0;
        }
        printf(" %d                %d             1000              NONAC\t\t\t%d \n", i, roomno[i], q);
    }
    for (int i = 8; i < 10; i++)
    {   int q = 1;
        if (arr[i] == 1)
        {
            q = 0;
        }
        printf(" %d               %d            2000              AC\t\t\t%d   \n", i, roomno[i],q);
    }
    printf("\nNON AC ROOMS=%d \tAC ROOMS=%d \tBOOKED ROOM=%d\tTOTAL ROOMS=%d\nTOTAL AVAILABLE ROOM=%d", avairoomnac, avairoomac, booked, total, totalavairoom);
    return 0;
}
int check_out()
{   char z[14],m[30];
    printf("\nEnter your name:");
    scanf("%s",&z);
    printf("%s YOUR BILL AMOUNT IS %d",z,billamount);
    printf("\nHOW WHOULD YOU LIKE TO PAY ");
    scanf("%s",&m);
    printf("\nTHANK YOU FOR VISITING OUR  HOTEL\nTAKE CARE BYE BYE SEE YOU SOON ");
    for (int i = 0; i < 10; i++)
    {
        arr[i]=0;
    }
    avairoomnac = 8, avairoomac = 2;
    booked=0;
    int l;
    printf("\nTo refrese menu please enter 0");
    scanf("%d",&l);
    if (l==0)
    {
        menu();
    }
    return 0;
    
    
}
int check_in()
{

    totalavairoom = total - booked;
    int b, e;
    char name[50];
    int no;
    printf("To book AC room press 1\nTo book NON AC room press 0");
    scanf("%d", &b);
    if (b == 1)
    {

        printf("Total Available AC room is %d", avairoomac);
        printf("\nHow many rooms you want to book");
        scanf("%d", &e);
        for (int i = 0; i < e; i++)
        {

            printf("Enter your name ");
            scanf("%s", &name);
            printf("Enter the room no to given to %s ", name);
            scanf("%d", &no);
            printf("%s your room is booked room no of your room is %d", name, no);
            printf("\nThank you for booked room");
            arr[8 + i] = 1;
        }
        billamount=e*2000;
        avairoomac = avairoomac - e;
        
    }
    else
    {
        printf("Total Available NONAC room is %d", avairoomnac);
        printf("\nHow many rooms you want to book");
        scanf("%d", &e);
        for (int i = 0; i < e; i++)
        {

            printf("\nEnter your name  ");
            scanf("%s", &name);
            printf("Enter the room no to given to %s ", name);
            scanf("%d", &no);
            printf("%s your room is booked room no of your room is %d", name, no);
            printf("\nThank you for booked room");
            arr[i] = 1;
        }
        avairoomnac = avairoomnac - e;
        billamount=e*1000;
    }
    booked = e;
    totalavairoom = total - booked;
    printf("\n\nNow available room status\n");
    printf("\nNON AC ROOMS=%d \tAC ROOMS=%d \tBOOKED ROOM=%d\tTOTAL ROOMS=%d\nTOTAL AVAILABLE ROOM=%d", avairoomnac, avairoomac, booked, total, totalavairoom);
    menu();
}

int main()
{
    char a,x;
    printf("                                  WELCOME TO SHAH HOTEL                      ");
    menu();
    printf("\nTo Check In room press I \nTo Check out room press O\n");
    scanf("%c", &a);
    if (a == 'i')
    {
        check_in();
    }
    else
    {
        check_out();
    }

    printf("\nFor check out press o");
    scanf("%s",&x);
  
        check_out();

  
    
    
    return 0;
}