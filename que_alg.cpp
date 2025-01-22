#include <iostream>
using namespace std;

#define q_size 100
typedef struct
{
    int head, tail;
    int data[q_size + 1];
} queue;
void enque(queue *q, int item)
{
    if ((q->tail + 1) % (q_size + 1) == q->head)
    {
        cout << "Queue is full";
    }
    else
    {
        q->data[q->tail] = item;
        q->tail = (q->tail + 1) % (q_size + 1);
    }
}

int deque(queue *q)
{
    int item;
    if (q->head == q->tail)
    {
        cout << "Queue is empty";
        return -1;
    }
    else
    {
        item = q->data[q->head];
        q->head = (q->head + 1) % (q_size + 1);
    }
    return item;
}
int main()
{
    queue q;
    q.head = 0;
    q.tail = 0;
    int item;
    enque(&q, 1);
    enque(&q, 2);
    item = deque(&q);
    cout << item;
    item = deque(&q);
    cout << item;
    item = deque(&q);
    cout << item;
    return 0;
}