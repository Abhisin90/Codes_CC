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
class node
{
  public: 
    int data;
    node* next;
    node(int val)
    {
      data = val;
      next = NULL;
    }
};
void insert(node* &head,int val)
{
  node* n= new node(val);
  if(head==NULL)
  {
    head = n;
    return ;
  }
  node* temp=head;
  while(temp->next!=NULL)
    temp=temp->next;
  temp->next=n;
}
void display(node* head)
{
  node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<"NULL";
}


node* reversek(node* &head,int k)
{
  node* pre_ptr=NULL,*curr_ptr=head,*next_ptr;
  int cnt=0;
  while(curr_ptr!=NULL&&cnt<k)
  {
    next_ptr = curr_ptr-> next;
    curr_ptr->next = pre_ptr;
    pre_ptr = curr_ptr;
    curr_ptr = next_ptr;
    cnt++;
  }
  if(next_ptr!=NULL)
    head->next=reversek(next_ptr,k);
  return pre_ptr;
}
signed main()
{
  fast
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  tc
  {
    int n,data;
    cin>>n;
    node* head= NULL;
    while(n--)
    {
      cin>>data;
      // if(data==-1) break;
      // else
      insert(head,data);
    }
    int k;
    cin>>k;
    // removeduplicates(head);
    head = reversek(head,k);
    display(head);
  }
  return 0;
}