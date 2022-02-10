#include <stdio.h>
int arr[10];
int billamount;
int totalavairoom, total, pirce;
int roomno[10];
static int booked;
int total = 10,days,no,cancel=0;
float any;
 int b, e , i=5;
 char name[50],anya;
 int avairoomnac = 8, avairoomac = 2;
int menu()
{
    totalavairoom = total - booked;
    printf("##MENU##\n");
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
    printf("---------------------------------------------------------------------------------------");
    printf("\nAll external servies for both room is free");
    printf("\nNON AC ROOMS=%d \t\tAC ROOMS=%d \t\tBOOKED ROOM=%d\t\tTOTAL ROOMS=%d\nTOTAL AVAILABLE ROOM=%d\n", avairoomnac, avairoomac, booked, total, totalavairoom);
    printf("---------------------------------------------------------------------------------------");
    return 0;
}
void genrate_bill()
{        int count=billamount+(billamount*18)/100;   
         printf("--------------------------------------------\n");
         printf("BILLED AMOUNT IS\n");
         printf("--------------------------------------------");
         printf("\nRent of your booked room       %d",billamount);
         printf("\nGST                            %d\n",(billamount*18)/100);
         printf("--------------------------------------------");
         printf("\nTotal Charges                  %d\n",billamount+(billamount*18)/100);
         printf("--------------------------------------------\n");
         fflush(stdin);
         if (cancel==0)
         {  
             fflush(stdin);
            printf("Please Confirm your payment by entering 'ACCEPT':");   
            scanf("%c",&anya);  
         printf("\n--------------------------------------------");
         printf("\nYour Details");
         printf("\n--------------------------------------------\n");
         printf("%s your room is booked.\n", name );
         printf("Your Aadhar card no:%.0f\n",any);
         i=e;
         printf("Your Booking ID is **%d**\n",45510+10*i);
         printf("Thank you for Booking.\n");
         printf("--------------------------------------------\n");
         }
         else
         {    
             printf("CHARGED AMOUNT                   %d\n",(count*10)/100);
              printf("--------------------------------------------\n");
              printf("RETUNNED AMOUNT IS             %d\n",(count*90)/100);
              printf("--------------------------------------------");
             
         }
         

}
int check_out()
{
int temp,ANS;
float ac;    
printf("\nIF YOU CANCEL YOUR BOOKING THEN 10 PERCENT OF YOUR AMOUNT WILL CAHRGE:");
printf("\nFOR GO BACK PRESS '0'\nFOR CONTINUE PRESS '1'\nENTER YOUR RESPONCE:");
scanf("%d",&temp);
if(temp==1)
{
    fflush(stdin);
    l3: printf("ENTER YOUR ACCOUNT NUMBER TO REFUND:");
    scanf("%f",&ac);
    printf("IF YOUR AC IS RIGHT THEN PRESS '1' IF NOT THEN PRESS '0'");
    fflush(stdin);
    printf("\nCONFIRM YOUR AC NUMBER:%.0f IS RIGHT:",ac);
    scanf("%d",&ANS);
    if (ANS==1)
    {
        printf("YOUR BOOKING CANCELLED.\nYOUR MONEY TRANSFERD IN AC NO:%.0f\n",ac);
        cancel=1;
    }
    else
    {
        goto l3;
    }
    genrate_bill();
    
}
else
{
    menu();
}  
}
int check_in()
{
    totalavairoom = total - booked;
     printf("To book AC room press 1\nTo book NON AC room press 0\nEnter your responce:");
    scanf("%d", &b);  
    if (b == 1)
    {
       // roomno=101;
        printf("Total Available AC room is %d", avairoomac);
        
        if(avairoomac==1)
        {
            e=1;
            printf("\n");
            i++;
        }

       else
       { 
           l1:printf("\nHow many rooms you want to book: ");
           scanf("%d", &e);
          
           if(e>2)
           {
               printf("We have only two ac rooms");
               i++;
               goto l1; 
           }
       }
        fflush(stdin);
        printf("How many days you want to stay:");
        scanf("%d",&days);
        fflush(stdin);
        printf("Enter your name: ");
        gets(name);
        
        no=101;
        
        printf("Enter your Aadhar card no:");
        scanf("%f",&any);
        
         billamount=e*2000*days;
         genrate_bill();

        for (int i = 0; i < e; i++)
        {
            arr[8 + i] = 1;
            no++;
        }
        avairoomac = avairoomac - e;
        
    }
    else
    {  // roomno=1;
        printf("Total Available NONAC room is %d", avairoomnac);
       l2: printf("\nHow many rooms you want to book:");
        scanf("%d", &e);
            if(e>8)
            {
                printf("We have only 8 rooms\n");
                goto l2;
            }
            else{
            fflush(stdin);    
            printf("Enter your name:");
            scanf("%s", name);
            }
             fflush(stdin);
              printf("How many days you want to stay:");
              scanf("%d",&days);
             fflush(stdin);
             printf("Enter your Aadhar card no:");
             scanf("%f",&any);
             no=1;
             billamount=e*1000*days;

       genrate_bill();
       for (int i = 0; i < e; i++)
        {
            no++;
            arr[i] = 1;
        }
        avairoomnac = avairoomnac - e;
            
    }
    booked = e;
    totalavairoom = total - booked;
    
   // printf("\n\nNow available room status\n");
  //  printf("\nNON AC ROOMS=%d \tAC ROOMS=%d \tBOOKED ROOM=%d\tTOTAL ROOMS=%d\nTOTAL AVAILABLE ROOM=%d", avairoomnac, avairoomac, booked, total, totalavairoom);
   // menu();

}

int main()
{
    char a,v,x;
    printf("\n\n~~~~~~~~~~~~WELCOME TO SHAH HOTEL~~~~~~~~~~~~\n");
    menu();
    printf("\nTO Book Your Room press latter 'A' :");
    scanf("%c", &a);
    if (a == 'a' || a == 'A')
    {
        check_in();
    }
    else
    {
        check_out();
    }
   // printf("                                  WELCOME TO SHAH HOTEL                      ");
    printf("\nFOR ROOM STATUS PRINT 'P'\n");
    printf("FOR CANCEL YOUR BOOKING PRINT 'C'\nFOR BOOK AGAIN PRINT 'A'\nENTER YOUR RESPONCE:");
    fflush(stdin);
    scanf("%c",&v);
    switch (v)
    {
    case'p':
    case'P':
        menu();
        break;
    case'C':
    case'c':
         menu();
         check_out();
         break;
    case'a':
    case'A':
         menu();
         check_in();
         break;
    default:
        menu();
        break;     
    }
    return 0;
}