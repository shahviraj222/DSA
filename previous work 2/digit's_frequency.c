#include <stdio.h>

int main() {

    char a[100];
    int arr[10]={0};  //we define arrys all value as zero 
    // for (int i=0; i<1001;i++) {
    // scanf("%c",&a[i]);
    // }
    scanf("%s",a);
    printf("%s",a);
    int i=0;
    while (a[i] != '\0')         // imp if you want to commpare NULL then go for ''
    {
        for(int j=0;j<10;j++)
        {
        if(a[i]==j)
        {
         arr[j]++;   
        }
        }
        i++;
    }  
    for (int i=0; i<10; i++) 
    {
       printf("%d ",arr[i]);
    } 
    return 0;
}
