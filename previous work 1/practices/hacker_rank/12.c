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
  return sum+find_nth_term(n-1, a, b, c);
      
     }
else 
{
    return find_nth_term(n-1, a, b, c);
}
}
int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}