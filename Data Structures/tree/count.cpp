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

Node* generateNode(int  data)
{
    Node* node = new Node();
    node->data = data;
    node->left = 0;
    node->right = NULL;
    return node;
}

Node* insert(Node* root, string data)
{
     if (root == NULL) {
        root =  generateNode(stoi(data));
        return root;
    }
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();
         if (current->left != NULL)
            q.push(current->left);
        else
        {
            if(data=="N") current->left=NULL;
            else
            current->left = generateNode(stoi(data));
            return root;
        }
        if (current->right != NULL)
            q.push(current->right);
        else
        {
             if(data=="N") current->left=NULL;
            else
            current->right = generateNode(stoi(data));
            return root;
        }  
    }
    return root;
}

int countLeaves(Node* root,ll cn)
{
    Node* temp =  root;
    if(root->left==NULL && root->right==NULL ) 
    {
        cn++;
        return cn;
    }
    else
    {
        Node* temp1 = temp;
        if(temp->left!= NULL )  
        {

            temp = temp->left;
            cn = countLeaves(temp,cn);
        }
        if(temp1->right!=NULL) 
        {
            temp1 =  temp1->right;
            cn = countLeaves(temp1,cn);
        }
        return cn;
    }
    return 0;
}

signed main()
{
    fast
    Node* root=NULL;
    queue<Node*>q;
    string x;
    while(cin>>x)
    {
        root=insert(root,x);
    }
    ll cn=0;
    ll cn1 = countLeaves(root,cn);
    cout<<cn1<<"\n";   
    
    return 0;
}


