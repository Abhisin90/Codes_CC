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
    ll n;cin>>n;
    ll a[n];
    a[0]={0};
    ll sum[n+5]={0};
    for(ll i=1;i<=n;i++)  
    {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    ll q;cin>>q;
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<" ";
    }
    return 0;
}