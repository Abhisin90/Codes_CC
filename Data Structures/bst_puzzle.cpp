#include<bits/stdc++.h>
using namespace std;
#define fo(i,o,n) for(int i=0;i<n;i++)
#define ro(i,o,n) for(int i=n-1;i>=0;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc ll t;cin>>t;while(t--);
typedef long long int  ll;
signed main()
{
    fast
    ll t;cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        unordered_set<ll>s;
        fo(i,o,n+m)  
        {
            ll x;
            cin>>x;
            if(s.count(x)>0 && i>=n)  cout<<"Yes"<<"\n";
            else if(i>=n)  cout<<"No"<<"\n";    
            s.insert(x);
        }
        cout<<"\n";
    }
    return 0;
}