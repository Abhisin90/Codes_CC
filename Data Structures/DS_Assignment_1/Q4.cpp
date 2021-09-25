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
	float y[MAX]; 
 	Stack() { top = -1; }
    bool push(float x);
    void pop();
    float peek();
    bool whether_Empty();
};

bool Stack::push(float x)
{
	if (top >= (MAX - 1)) 
		return false;
	else 
	{
        y[++top] = x;
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
float Stack::peek()
{
    if (top < 0) 
        return 0;
    else {
        float x = y[top];
        return x;
    }
}
bool Stack::whether_Empty()
{
    return (top < 0);
}

void input(ll t)
{
    while(t--)
    {
        string str;
        int cn=0;
        class Stack stk;
        float result=-1,u=0;
        while(true)
        {
            cin>>str;
            if(str[0]=='?') break;
            if(str[0]<48||str[0]>57)
            {
                result= stk.peek();
                stk.pop();
                if(str[0]=='+') result+=stk.peek();
                if(str[0]=='-') result=stk.peek()-result;
                if(str[0]=='*') result*=stk.peek();
                if(str[0]=='/') result=stk.peek()/result;
                stk.pop();
                stk.push(result);
            }
            else
            {
                stk.push((float)stoi(str));
            }
        }
        cout<<(int)result<<endl;
    }
}

signed main()
{
	fast
    ll t;cin>>t;
    input(t);
    return 0;    
}





