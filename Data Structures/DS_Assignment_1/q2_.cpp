#include<bits/stdc++.h>
using namespace std;
#define fo(i,o,n) for(int i=0;i<n;i++)
#define ro(i,o,n) for(int i=n-1;i>=0;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int  ll;

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

void print_list(node* head)
{
  node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}

void insertion(node* &head,int val)
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

node* reverse(node* &head,int k)
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
    head->next=reverse(next_ptr,k);
  return pre_ptr;
}

void remove_dupli(node* &head)
{
  node *ptr,*dele;
  node *ptr1;
  ptr = head;
  while(ptr!=NULL&&ptr->next!=NULL)
  {
    ptr1 = ptr;
    while(ptr1->next!=NULL)
    {
      if(ptr->data==ptr1->next->data)
      {
        dele=ptr1->next;
        ptr1->next=ptr1->next->next;
        delete(dele);
      }
      else 
        ptr1=ptr1->next;
    }
    ptr=ptr->next;
  }
}


void input()
{
    ll t;cin>>t;
  while(t--)
  {
    int n,data;
    node* head= NULL;
    while(true)
    {
      cin>>data;
      if(data==-1) break;
      else
      insertion(head,data);
    }

    remove_dupli(head);
    print_list(head);
	cout<<endl;
  }
}
signed main()
{
  fast
  input();
  return 0;
}