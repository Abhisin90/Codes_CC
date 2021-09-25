#include<bits/stdc++.h>
using namespace std;
#define fo(i,o,n) for(int i=0;i<n;i++)
#define ro(i,o,n) for(int i=n-1;i>=0;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int  ll;

#define MAX 1000
class Stack 
{
 public:
    int top;
	char a[MAX]; 
 	Stack() { top = -1; }
    bool push(char x);
    void pop();
    char peek();
    bool isEmpty();
    bool check(char cr[],int length);
};
bool Stack::push(char x)
{
	if (top >= (MAX - 1)) 
		return false;
	else 
	{
        a[++top] = x;
        return true;
    }
}
void Stack::pop()
{
    if (top < 0) 
        return ;
    else {
        top--;
        return ;
    }
}
char Stack::peek()
{
    if (top < 0) 
        return 0;
    else {
        char x = a[top];
        return x;
    }
}
bool Stack::isEmpty()
{
    return (top < 0);
}
bool Stack::check(char expr[],int length)
{ 
    class Stack s;
    char x;
    for (int i = 0; i < length; i++)
    {
        if (expr[i] == '(' || expr[i] == '['|| expr[i] == '{')
        {
            s.push(expr[i]);
            continue;
        }
        if (s.isEmpty())   return false;
 
        switch (expr[i]) 
        {
        case ')':
            x = s.peek();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
        case '}':
            x = s.peek();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;
        case ']':
            x = s.peek();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
    return (s.isEmpty());
}

void input()
{
    string s;
    cin>>s;
    char cr[s.length()];
    strcpy(cr, s.c_str());
    class Stack stk;
    if(stk.check(cr,s.length())) cout<<"balanced"<<endl;
    else cout<<"not balanced"<<endl;
}

signed main()
{
	fast
	input();
    return 0;
}