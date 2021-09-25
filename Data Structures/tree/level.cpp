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


Node* insert(Node* root,int data,queue<Node*>&q)
{
    Node* node = generateNode(data);
    if(root ==  NULL)  root=node;
    else if(q.front()->left==NULL)  q.front()->left=node;
    else 
    {
        q.front()->right=node;
        q.pop();
    }
    q.push(node);
    return root;
}

void LevelOrder(Node* root)
{
    if(root==NULL) return ;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        vector<ll>v;
        ll nodecn = q.size();
        while(nodecn>0)
        {
            Node* current = q.front();
            v.push_back(current->data);
            if(current->left!= NULL)    q.push(current->left);
            if(current->right!= NULL)    q.push(current->right);
            q.pop();
            nodecn--;   
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(auto c:v)  cout<<c<<" ";
        
        cout<<"\n";
    }
}

signed main()
{
    fast
    Node* root=NULL;
    queue<Node*>q;
    ll n;cin>>n;
    fo(i,o,n)
    {
        ll x;
        cin>>x;
        root = insert(root,x,q);
    }
    LevelOrder(root);
    
    return 0;
}