#define SIZE 50
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char s[SIZE];
int top = -1;

void push(char e)
{
    s[++top] = e;
}

char pop()
{
    return s[top--];
}

int ints[SIZE];
int topint = -1;

void pushint(int e)
{
    ints[++topint] = e;
}

int popint()
{
    return ints[topint--];
}

void postEva(char pofx[50])
{
    int n1, n2, n3;
    int i = 0;
    // printf("\n\nRead the Postfix Expression ? ");
    // gets(pofx);
    int l = strlen(pofx);
    for (int i = 0; i < l; i++)
    {
        if (pofx[i] == ' ' || pofx[i] == '\t')
        {
            continue;
        }
        if (isdigit(pofx[i]))
        {
            int x = pofx[i] - '0';
            pushint(x);
        }
        else
        {
            n1 = popint();
            n2 = popint();
            switch (pofx[i])
            {
            case '+':
                n3 = n1 + n2;
                break;
            case '-':
                n3 = n2 - n1;
                break;
            case '/':
                n3 = n2 / n1;
                break;
            case '*':
                n3 = n1 * n2;
                break;

            default:
                printf("Unknown Operetor");
                break;
            }
            pushint(n3);
        }
    }
    printf("\nThe result is %d ", n3);
}

int pr(char e)
{
    switch (e)
    {
    case '#':
        return 0;
    case '(':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 3;
    default:
        break;
    }
}

void intoPost(char infx[50], char pofx[50])
{
    char ch;
    int i = 0, k = 0;
    push('#');

    while ((ch = infx[i++]) != '\0')
    {
        if (ch == ' ')
        {
            continue;
        }
        if (ch == '(')
        {
            push(ch);
        }
        else if (isalnum(ch))
        {
            pofx[k++] = ch;
            pofx[k++] = ' ';
        }
        else if (ch == ')')
        {
            while (s[top] != '(')
            {
                pofx[k++] = pop();
                pofx[k++] = ' ';
            }
            pop();
        }
        else
        {
            while (pr(s[top]) >= pr(ch))
                pofx[k++] = pop();
            pofx[k++] = ' ';

            push(ch);
        }
    }
    while (s[top] != '#')
        pofx[k++] = pop();
    pofx[k++] = ' ';
    pofx[k] = '\0';
}

void intoPre(char infx[50], char prefixF[50])
{
    int i, j;
    i = strlen(infx);
    j = 0;
    char prefx[50], prefix[50], ch;
    while (i != 0)
    {
        ch = infx[--i];
        if (ch == '(')
            prefx[j++] = ')';
        else if (ch == ')')
            prefx[j++] = '(';
        else
            prefx[j++] = ch;
    }
    prefx[j] = '\0';
    printf("\nReverse String for Infix to Prefix Conversion: %s", prefx);

    intoPost(prefx, prefix);
    i = strlen(prefix);
    j = 0;

    while (i != 0)
    {
        prefixF[j++] = prefix[--i];
    }
    prefixF[j] = '\0';
}

void main()
{
    char infx[50], pofx[50], prefixF[50];
    int j;
    printf("\n\nRead the Infix Expression ? ");
    gets(infx);

    intoPost(infx, pofx);
    printf("\n\nGiven Infix Expn: %s Postfix Expn : %s\n", infx, pofx);

    // intoPre(infx, prefixF);
    // printf("\n\nGiven Infix Expn: %s Prefix Expn : %s\n", infx, prefixF);

    postEva(pofx);
}