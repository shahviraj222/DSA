#include <stdio.h>
float convter(float b);
int main()
    {    
        float a;
        printf("Enter the tempretur:-      ");
        scanf("%f",&a);
        printf("the converted temp in °F %.3f \n", convter(a));
        //%f aye ga becuse it return float
        //  %.1=decimal ke baad 1 hi digit aye ga
        //   %.3=decimal ke baad 3 hi digit aye ga
    
        return 0;
    

    }
float convter(float b)
{   //(0°C × 9/5) + 32 = 32°F
float c;
c=b*(9/5)+32;
return c;
}