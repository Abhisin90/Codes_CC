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
    return 0;
}