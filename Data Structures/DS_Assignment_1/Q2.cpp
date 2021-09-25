#include <iostream>
using namespace std;

const int maxsize = 100000;
struct fifo{
    int front=-1;
    int rear=-1;
    int qarr[maxsize];
};

typedef struct fifo queue; 

void enq(queue* q, int x){
    if(q->front==maxsize-1){
        cout << endl << "overflow" << endl;
        exit(-1);
    }
    else if(q->front==-1){
        q->front++;
        q->rear++;
        q->qarr[q->front] = x;
    }
    else{
        q->front++;
        q->qarr[q->front] = x;
    }
}

int deq(queue* q){
    if(q->front>0){
        int temp = q->qarr[q->rear];
        for(int i=q->rear; i<q->front; i++){
            q->qarr[i] = q->qarr[i+1];
        }
        q->front--;
        return temp;
    }
    else if(q->front==0){
        int temp = q->front;
        q->front = -1;
        q->rear = -1;
        return q->qarr[temp];
    }
}

int getfront(queue* q){
    if(q->front!=-1) return q->qarr[q->front];
}

void display(queue* q){
    if(q->front==-1) cout << "queue's empty" << endl;
    else{
        for(int i=q->rear; i<=q->front; i++){
            cout << q->qarr[i] << ' ';
        }
        cout << endl;
    }
}

int top = -1;
int stack[100000];

void push(int a){
    top++;
    stack[top] = a;
}

int pop(){
    int temp = top;
    top--;
    return stack[temp];
}

int main(){

    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    // q2 will contain the elements in the desired order
    char s; cin>>s>>s;
    int n; cin>>n;


    cin>>s>>s;
    queue q1, q2;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        enq(&q1, x);
    }
    int k; cin>>s>>s>>k;

    // elements to be reversed r put in stack
    for(int i=0; i<k; i++){
        push(deq(&q1));
    }


    // put elements of stack into queue2
    for(int i=0; i<k; i++){
        enq(&q2, pop());
    }

    // put remaining elements of q1 into q2
    for(int i=0; i<n-k; i++){
        enq(&q2, deq(&q1));
    }

    
    display(&q2);
}