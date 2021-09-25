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
    ll arr[n][n];
    ll sum[n+5][n+5]={0};
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            cin>>arr[i][j];
            sum[i][j]=sum[i][j-1]+arr[i][j]+sum[i-1][j]-sum[i-1][j-1];
        }
    }
    ll q;cin>>q;
    while(q--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<sum[c][d]-sum[a-1][d]-sum[c][b-1]+sum[a-1][b-1]<<" ";
    }
    return 0;
}