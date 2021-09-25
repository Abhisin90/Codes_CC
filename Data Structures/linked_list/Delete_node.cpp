#include<bits/stdc++.h>
using namespace std;
#define fo(i,o,n) for(int i=0;i<n;i++)
#define ro(i,o,n) for(int i=n-1;i>=0;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc ll t;cin>>t;while(t--);
typedef long long int  ll;

struct Node
{
    int data;
    Node* next;
};

Node* insert(Node* head,ll x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if(head==NULL)
    {
        temp->next = head;
        head = temp;
        return head;
    }
    Node* temp1 = head;
    while(temp1->next!=NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
    return head;
}

void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<"\n";
}

void delet(Node* head,ll n)
{
    Node* temp1 = head;
    if(n==1)
    {
        head = temp1->next;
        free(temp1);
        return ;
    }
    fo(i,o,n-2)
    {
        temp1 = temp1->next;
    }
    Node* temp = temp1->next;
    temp1->next = temp->next;
    free(temp);
}

signed main()
{
    fast
    Node* head = NULL;
    ll t;cin>>t;
    fo(i,o,t)
    {       
        ll x; 
        cin>>x;
        head = insert(head,x);
    }
    print(head);
    ll q;cin>>q;
    fo(i,o,q)
    {
        ll n;cin>>n;
        delet(head,n);  
    }
    print(head);
    
    return 0;
}