#include <stdio.h>
#include <string.h>
int parser(char *string)
{
  int in = 0, index = 0;
  for (int i = 0; i < strlen(string); i++)
  {
    if (string[i] == '<')
    {
      in = 0;
      continue;
      printf("\nvvvvvvvvvv");
    }
    else if (string[i] == '>')
    {
      in = 1;
      continue;
      printf("\nvvvvvvvvvv");
    }
    // else if (string[i]==' ')
    // {
    //   string[i]=string[i+1];
    // }
    if (in == 1)
    {
      string[index] = string[i];
      index++;

      //printf("\nvvvvvvvvvv");
    }
  }
  string[index] = '\0';

  return 0;
}
int main()
{
  char a[50] = "<h1> i am viraj shah to become pro programer </h1>";
  parser(a);
  printf("after parsering the string we get ~~~~~%s~~~~~\n", a);

  return 0;
}