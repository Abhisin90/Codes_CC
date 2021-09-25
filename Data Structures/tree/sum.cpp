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

ll summup(Node* root,ll k,ll y,ll n)
{
    queue<Node*>q;
    q.push(root);
    ll a=0;
    vector<ll>temp;
    while(!q.empty())
    {
        a++;
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
        ll s=0;
        for(auto c:v)  
        {
            s+=c;
        }
        temp.push_back(s);
    }
    vector<ll>sum;
    sum=temp;
    ll cu = sum[y-1];
    // cout<<cu<<" ";
    return cu;
}

signed main()
{
    fast
    Node* root=NULL;
    ll n;cin>>n;
    fo(i,o,n)
    {
        ll x;
        cin>>x;
        root = insert(root,x);
    }
    ll k;cin>>k;
    ll cn=0;
    ll y;
    fo(i,o,k)
    {
        cin>>y;
        cn+=summup(root,k,y,n);        
    }    
    cout<<cn<<" ";
    return 0;
}