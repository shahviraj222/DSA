#include <stdio.h>
int main(){
    int a;
    a=2;
 
    printf("%d %d %d",++a,++a,a--);
    // ... the behavior of compiler is from right  to left ...
return 0;}