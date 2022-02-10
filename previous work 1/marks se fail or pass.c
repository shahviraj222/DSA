#include<stdio.h>
int main()
{ 
    int p,c,m;
    float t;
    printf("Enter the marks of physisc\n");
    scanf("%d",&p);

    printf("Enter the marks of maths\n");
    scanf("%d",&m);

    printf("Enter the marks of Chemistry\n");
    scanf("%d",&c);

    t=(p+c+m)/3;//very basic c not work with this give brackets to requreid.
    if(t<40 || p<33 || c<33 || m<33)
    {
    
    printf("you're precent is %f you are fail.\n",t);
             
    }
    else
    {
        printf("you're precent is %f you are  pass.\n",t);
    }
    


        return 0;
}
 