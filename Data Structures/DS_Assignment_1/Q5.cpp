#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define fast  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin>>t; while(t--)
#define f() for(ll i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define int ll
#define ft first
#define sz(v) int(v.size())
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
void print(Queue *queue)
{
	int j=queue->front;
	while(j<=queue->rear)
	{
		cout<<queue->array[j]<<" ";
		j++;
	}
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
signed main()
{
	fast
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	int n,k;
	cin>>n;
	Queue *queue=createQueue(n);
	while(n--)
	{
		int temp;
		cin>>temp;
		queue = enqueue(queue,temp);
	}
	cin>>k;
	queue = reverseQueueFirstKElements(k,queue);
	print(queue);
}