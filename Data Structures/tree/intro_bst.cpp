#include<bits/stdc++.h>
using namespace std;
#define fo(i,o,n) for(int i=0;i<n;i++)
#define ro(i,o,n) for(int i=n-1;i>=0;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc ll t;cin>>t;while(t--);
typedef long long int  ll;

struct bstNode
{
    int data;
    bstNode* left;
    bstNode* right;
};

bstNode* generateNode(int data)
{
    bstNode* node = new bstNode();
    node->data = data;
    node->left = 0;
    node->right = NULL;
    return node;
}

bstNode* insert(bstNode* root,int data)
{
    if(root==NULL)    root = generateNode(data);
    else if(data <= root->data)      root->left= insert(root->left,data);
    else    root->right= insert(root->right,data);
    return root;
}

bool search(bstNode* root,int n)
{
    if(root==NULL)  return false;
    else if(n==root->data)   return true;
    else if(n>=root->data)   return search(root->right,n);
    else   return search(root->left,n);
}

signed main()
{
    fast
    bstNode* root = NULL;
    root = insert(root,13);
    root = insert(root,1);
    root = insert(root,19);
    root = insert(root,10);
    root = insert(root,23);
    ll q;cin>>q;
    while(q--)
    {
        ll n;cin>>n;
        if(search(root,n)==true)  cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    return 0;
}