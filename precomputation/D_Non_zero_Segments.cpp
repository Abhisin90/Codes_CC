#include<bits/stdc++.h>
using namespace std;
#define fo(i,o,n) for(ll i=0;i<n;i++)
#define ro(i,o,n) for(ll i=n-1;i>=0;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc ll t;cin>>t;while(t--);
#define pb push_back
typedef long long int  ll;
signed main()
{
    fast
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    set<ll>s;
    s.insert(0);
    ll sum=0,cn=0;
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
        if(s.count(sum))
        {
            cn++;
            s.clear();
            s.insert(0);
            sum=a[i];
        }
        s.insert(sum);
    }
    cout<<cn<<"\n";
    return 0;
}
 
