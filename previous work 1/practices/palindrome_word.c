#include<stdio.h>
int main()
{
  int flag=1;
  int n;
  printf("Enter the number of your string: ");
  scanf("%d",&n);
  char arr[n];
  printf("Enter your string:");
  scanf("%s",arr);
  // check wethre word is palindrome
  int j=n-1;
  for (int i = 0; i < n/2; i++)
  {
    if (arr[i]=!arr[j])
    {
      flag=0;
      break;
    }
    j--;
  }
  if (flag==0)
  {
    printf("word is not palindrome\n");
  }
  else
  {
    printf("word is palindrome\n");
  }

  return 0;
}