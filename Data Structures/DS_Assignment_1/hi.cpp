#include<bits/stdc++.h>
using namespace std;
#define fo(i,o,n) for(int i=0;i<n;i++)
#define ro(i,o,n) for(int i=n-1;i>=0;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int  ll;

#define MAX 1000

class Stack 
{
 public:
    int top;
	int a[MAX]; 
 	Stack() { top = -1; }
    bool push(int x);
    void pop();
    int peek();
    bool isEmpty();
};
bool Stack::push(int x)
{
	if (top >= (MAX - 1)) 
		return false;
	else 
	{
        a[++top] = x;
        return true;
    }
}
void Stack::pop()
{
    if (top < 0) 
        return ;
    else {
        top--;
        return ;
    }
}
int Stack::peek()
{
    if (top < 0) 
        return 0;
    else {
        int x = a[top];
        return x;
    }
}
bool Stack::isEmpty()
{
    return (top < 0);
}
class Queue 
{
public:
    int front, rear, size;
    unsigned capacity;
    int* array;
};
Queue *createQueue(unsigned capacity)
{
    Queue* queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = new int[queue->capacity];
    return queue;
}
bool isfull(Queue* queue)
{
	return (queue->size==queue->capacity);
}
bool isempty(Queue* queue)
{
	return (queue->size==0);
}
Queue *enqueue(Queue *&queue,int num)
{
	queue->rear = (queue->rear+1)%queue->capacity;
	queue->array[queue->rear]= num;
	queue->size = queue->size+1;
	return queue;
}
Queue *dequeue(Queue* &queue)
{
	queue->front=(queue->front+1)%queue->capacity;
	queue->size=queue->size-1;
	return queue;
}

void print(Queue *queue)
{
	int j=queue->front;
	while(j<=queue->rear)
	{
		cout<<queue->array[j]<<" ";
		j++;
	}
}
int front(Queue *queue)
{
	if(isempty(queue))
		return INT_MIN;
	return queue->array[queue->front];
}

int rear(Queue *queue)
{
	if(isempty(queue))
		return INT_MIN;
	return queue->array[queue->rear];
}

Queue *reverseQueueFirstKElements(int k, Queue* &queue)
{
	class Stack s;
    for (int i = 0; i < k; i++) 
	{
        s.push(front(queue));
        queue=dequeue(queue);
    }
    while (!s.isEmpty()) 
	{
        queue=enqueue(queue,s.peek());
        s.pop();
    }
    for (int i = 0; i < queue->size - k; i++) 
	{
		queue=enqueue(queue,queue->array[queue->front]);
        queue=dequeue(queue);
    }
	return queue;
}

void input()
{
    char ch,cha,c,charac;
	cin>>ch>>cha;
	int N,k;
	cin>>N;
	cin>>c>>charac;
	Queue *queue=createQueue(N);
	while(N--)
	{
		int temp;
		cin>>temp;
		queue = enqueue(queue,temp);
	}
	cin>>ch>>cha;
	cin>>k;
	queue = reverseQueueFirstKElements(k,queue);
	print(queue);
}


signed main()
{
	fast
    input();
    return 0;	
}