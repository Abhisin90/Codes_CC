#include<bits/stdc++.h>
using namespace std;
#define fo(i,o,n) for(int i=0;i<n;i++)
#define ro(i,o,n) for(int i=n-1;i>=0;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int  ll;

struct Node
{
    int data;
    struct Node *next;
};
 

struct Node *newNode(int data)
{
   Node *temp = new Node;
   temp->data = data;
   temp->next = NULL;
   return temp;
}
 
/* Function to remove duplicates from a
   unsorted linked list */
void removeDuplicates(struct Node *start)
{
    struct Node *ptr1, *ptr2, *dup;
    ptr1 = start;
 
    /* Pick elements one by one */
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;
 
        /* Compare the picked element with rest
           of the elements */
        while (ptr2->next != NULL)
        {
            /* If duplicate then delete it */
            if (ptr1->data == ptr2->next->data)
            {
                /* sequence of steps is important here */
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete(dup);
            }
            else /* This is tricky */
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
}
 
/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}
 
void input(ll t)
{
   while(t--)
    {
        ll n,data;
        cin>>n;
        struct node* head=(struct node*)malloc(sizeof(struct node));
        first_input(head);         // first input
        for(int i=0;i<n-1;++i)         // for other inputs loop is running n-1 times
        {
            cin>>data;
            insert(head,data);            
        }

        int k;cin>>k;
        head = reversegroup(head,k);
         
        printlist(head);
    }
}

signed main()
{
    fast
    ll t;cin>>t;
    input(t);
    return 0;
}



 
    printf("Linked list before removing duplicates ");
    printList(start);
 
    removeDuplicates(start);
 
    printf("\nLinked list after removing duplicates ");
    printList(start);
 
    return 0;
}