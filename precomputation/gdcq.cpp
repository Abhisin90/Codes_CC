#include<bits/stdc++.h>
using namespace std;
#define fo(i,o,n) for(int i=0;i<n;i++)
#define ro(i,o,n) for(int i=n-1;i>=0;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc ll t;cin>>t;while(t--);
#define pb push_back
typedef long long int  ll;
signed main()
{
    fast
    ll t;cin>>t;
    while(t--)
    {
        ll n,q;cin>>n>>q;
        ll arr[n];
        for(ll i=1;i<=n;i++)  cin>>arr[i];
        ll gcf[n+10]={0};
        ll gcb[n+10]={0};
        for(ll i=1;i<=n;i++)
        {
            gcf[i]=__gcd(gcf[i-1],arr[i]);
        }
        for(ll i=n;i>=1;i--)
        {
            gcb[i]=__gcd(gcb[i+1],arr[i]);
        }
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            cout<<__gcd(gcb[r+1],gcf[l-1])<<"\n";
        }
    }
    return 0;
}