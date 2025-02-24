#include<iostream>
using namespace std;
class stack
{
    int *arr;
    int size;
    int top;
    public:
    bool flag;
    stack(int s)
    {
        size=s;
        top=-1;
        arr=new int [s];
        flag=1;
    }
    void push(int value)
    {
        if(top==size-1)
        {
            cout<<"stack Overflow\n";
            return ;
        }
        else
        {
            top++;
            arr[top]=value;
            cout<<"pushed"<<value<<" into the stack\n";
            flag=0;

        }

    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"underflow";

        }
        else
        {
            cout<<"Popped"<<arr[top]<<" from the stack\n";
            top--;
           
        }

    }
    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack is empty\n";
            return -1;
            flag=1;
        }
        else
        {
            return arr[top];
        }
    }
 bool Isempty()
 {
    return top==-1;
 }

int IsSize()

{
    return top+1;
}
};
int main()
{
 stack s(5);
s.push(5);
cout<<s.top());








}