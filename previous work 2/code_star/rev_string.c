#include <stdio.h>
#include <string.h>
void main()
{
    	char a[20] = "viraj";
	int i,l;
    	l=strlen(a);
    	printf("Reversed String: ");
    	for(i = l; i >= 0; i--)
        		printf("%c",a[i]);
}
