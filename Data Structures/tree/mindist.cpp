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

Node* generateNode(ll data)
{
    Node* node = new Node();
    node->data = data;
    node->left = 0;
    node->right=NULL;
    return node;
}

int dist1(Node* root, ll  x)
{
    if (root->data == x)      return 0;
    else if (root->data > x)     return 1 + dist1(root->left, x);
    return 1 + dist1(root->right, x);
}

int dist2(Node* root, ll a, ll b)
{
    if (!root)   return 0;
    if (root->data > a && root->data > b)      return dist2(root->left, a, b);
    if (root->data < a && root->data < b)      return dist2(root->right, a, b);
    if (root->data >= a && root->data <= b)     return dist1(root, a) + dist1(root, b);
    return 0;
}

int min_dist(Node* root, ll a, ll b)
{
   if (a > b)   swap(a, b);
   return dist2(root, a, b);  
}

Node* dist(int post[], int* postIndex,ll key, ll min, ll max, ll size )
{
    if (*postIndex < 0) return NULL;
    Node* root = NULL;
    if (key > min && key < max)
    {
        root = generateNode(key);
        *postIndex = *postIndex - 1;
        if (*postIndex >= 0)
        {
            root->right = dist(post, postIndex, post[*postIndex],key, max, size );
            root->left = dist(post, postIndex,post[*postIndex],min, key, size );
        }
    }
    return root;
}

Node* make_Tree (int post[], ll size){
    int postIndex = size-1;
    return dist(post, &postIndex, post[postIndex],INT_MIN, INT_MAX, size);
}

signed main()
{
    fast
    Node* root= NULL;
    ll n,q;
    cin>>n;
    int post[n];
    fo(i,o,n)    cin>>post[i];
    root = make_Tree(post,n);
    cin>>q;
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        cout<<min_dist(root,a,b)<<"\n";
    }
}


