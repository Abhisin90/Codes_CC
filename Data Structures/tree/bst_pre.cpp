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
    Node* left;
    Node* right;
};

Node* generateNode(int data)
{
    Node* node = new Node();
    node->data = data;
    node->left = 0;
    node->right = NULL;
    return node;
}

Node* insert(Node* root,int data)
{
    if(root==NULL)    root = generateNode(data);
    else if(data <= root->data)      root->left= insert(root->left,data);
    else    root->right= insert(root->right,data);
    return root;
}

int findpre(Node* root)
{
    if(root==NULL)  return 0;
    else if(root->right==NULL) return root->data;
    else  return findpre(root->right);
}

Node* findroot(Node* root,ll k)
{
    while(root!=NULL)
    {
        if(root->data == k) return root->left;
        else if(k<root->data) root=root->left;
        else root=root->right;;
    }
    return root->left;
}

signed main()
{
    fast
    Node* root = NULL;
    ll n;cin>>n;
    fo(i,o,n)
    {
        ll x;
        cin>>x;
        root = insert(root,x);
    }
    ll k;
    cin>>k;
    root =  findroot(root,k);
    ll cn=0;
    cn = findpre(root);
    cout<<cn<<" ";
    return 0;
}



