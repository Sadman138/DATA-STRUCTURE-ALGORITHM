#include<iostream>
using namespace std;
class queue
{
    int *arr;
    int front,rear,size;
    public:

    queue(int n)
    {
        arr=new int[n];
        size=n;
        front=rear=-1;  
    }
    bool IsEmpty()
    {
        return front==-1;
    }
    bool IsFull()
    {
        return rear==size-1;
    }
    void push(int x)
    {
        if(IsEmpty())
        {
            cout<<"pushed"<<x<<" into the queue \n";
                    
              
            front=rear=0;
            arr[0]=x;
            return ;
        }
        else if(IsFull())
        {
            cout<<"Queue Overflow\n";
              
            return;
        }
        else if(IsFull())
        {
            cout<<"Queue Overflow\n";
            return ;
        }
        else
        {
            rear=rear+1;
            arr[rear]=x;
            cout<<"Pushed"<<x<<" into the queue\n";


        }
    }

        void pop()
        {
            
                if(IsEmpty())
                {
                    cout<<"Queue UnderFlow\n";
                    return ;


                }
                else
                {
                    if(front==rear)
                    {
                        cout<<"popped"<<arr[front]<<" into the queue\n";
                        front=rear=-1;
                    }
                    
                    else
                    {    cout<<"popped"<<arr[front]<<" into the queue\n";
                        front=front+1;

                    }
                      
                }
            }
            int start()
            {
                if(IsEmpty())
                {
                    cout<<"queue is empty\n";
                    return -1;
                }
                else
                return arr[front];
            }
        
    };



int main()
{
    queue q(5);
    q.push(5);
    q.push(15);
    q.push(51);
    q.pop();
    cout<<q.start()<<endl;
 




}