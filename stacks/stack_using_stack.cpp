#include <iostream>
#include <conio.h>
using namespace std;
class Node
{
    //here creating node as public because we have to use node out side the function
public:
    int data;
    Node *next;
};
//This reduce the flexibility of stack
// we can not give function to other pointer
class Stack
{
private:
    Node *top; //here node type pointer created in private only the members of class use top variable
public:
    Stack()
    {
        top = NULL;
    }
    //we also decleare function inde this but we only declere prototype of function
    void push(int);
    int pop();
    int peek(int);
    void Display();
};
//here we are saying that the member of class which return void
// inside the class stack name is push scope resolution is use to define function
void Stack::push(int data)
{
    Node *t = new Node; //here pointer t created and intialize with node one class pointed
    if (t == NULL)
    {
        printf("Stack over flow");
    }
    else
    {
        t->data = data;
        t->next = top;
        top = t;
    }
}
int Stack::pop()
{
    int x = -1;
    if (top == NULL)
    {
        printf("Stack under flow");
        return x;
    }
    else
    {
        Node *t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}
int Stack::peek(int pos)
{
    Node *t = top;
    int i = 0;
    while (i < pos - 1)
    {
        //this save us from !!runtine error!!
        if (t != NULL)
        {
            t = t->next;
        }
        else
        {
            printf("!!Invalid Postion!!");
            return -1;
        }
        i++;
    }
    return t->data;
}
void Stack::Display()
{
    Node *t = top;
    while (t != NULL)
    {
        printf("%d\n", t->data);
        t = t->next;
    }
}
int main()
{
    //creating object of class Stack
    Stack stk;
    //here no limit to creating node
    stk.push(45);
    stk.push(40);
    stk.push(51);
    stk.push(68);
    stk.push(75);
    stk.Display();
    printf("peeked value is %d\n",stk.peek(5));
    stk.pop();
    stk.Display();
    return 0;
}