#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int sum=0;
int find_nth_term(int n, int a, int b, int c) {
  //Write your code here
  
  if(n==1)
  {   
      return sum+1;
  }
  else if (n==2) {
  sum=sum+2;
  return find_nth_term(n-1, a, b, c);
  }
  else if(n==3)
  {sum=sum+3;
  return find_nth_term(n-1, a, b, c);
      
     }
else 
{
    return find_nth_term(n-1, a, b, c);
}
}
int main() {
    int n, a=1, b=2, c=3;
    printf("series start's from 1\n");
    printf("enter the number to find sum of series:");
    scanf("%d", &n);
    int ans = find_nth_term(n, a, b, c);
 
    printf("your total sum is %d\n", ans); 
    return 0;
}