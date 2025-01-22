#include <iostream>
using namespace std;

#define max 100
typedef struct
{

    int top;
    int data[max];
} stack;
void push(stack *s, int item)
{
    if (s->top < max)
    {
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else
    {
        cout << "Stack is full";
    }
}
int pop(stack *s)
{
    int item;
    if (s->top == 0)
    {
        cout << "Stack is empty";
        return -1;
    }
    else
    {
        s->top = s->top - 1;
        item = s->data[s->top];
    }
    return item;
}
int main()
{
    stack s;

    s.top = 0;
    int item;
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    item = pop(&s);
    cout << item;
    item = pop(&s);
    cout << item;
    item = pop(&s);
    cout << item;
    item = pop(&s);
    cout << item;
}
