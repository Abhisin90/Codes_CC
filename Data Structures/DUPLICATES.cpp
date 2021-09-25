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
    unordered_map<ll,ll>m;
    fo(i,o,t) 
    {
        ll x;
        cin>>x;
        m[x]++;
    }
    ll q;cin>>q;
    fo(i,o,q)
    {
        ll y;
        cin>>y;
        m[y]--;
    }
    ll sum = 0;
    for(auto &it:m) 
    {
        if(it.second>1)  
        {
            sum+=it.second*it.first;
        }
    }
    cout<<sum<<" ";
    return 0;
}