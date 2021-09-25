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

void insert(Node** n,ll x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = *n;
    *n = temp;
}

void print(Node* n)
{
    while(n!= NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }
    cout<<"\n";
}

signed main()
{
    fast
    Node* head;
    head=NULL;
    ll t;cin>>t;
    fo(i,o,t)
    {
        ll x;
        cin>>x;
        insert(&head,x);
        print(head);
    }
    return 0;
}