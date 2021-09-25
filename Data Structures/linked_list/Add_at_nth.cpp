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

Node* insert(Node* head,ll x,ll n)
{
    Node* temp1 =  new Node();
    temp1->data = x;
    temp1->next = NULL;
    if(n==1)
    {
        temp1->next = head;
        head = temp1;
        return head;
    }

    Node* temp2 = head;
    fo(i,o,n-2)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next =temp1;    
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

signed main()
{
    fast
    Node* head = NULL;
    ll t;cin>>t;
    fo(i,o,t)
    {
        ll x,n;
        cin>>x>>n;
        head = insert(head,x,n);   
    }
    print(head);
    return 0;
}