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
    ll n,m;cin>>n>>m;
    int arr[n+2]={0};
    while(m--)
    {
        ll a,b,k;cin>>a>>b>>k;
        arr[a]+=k;
        arr[b+1]-=k;
    }
    
    ll sum[n+2]={0};
    for(ll i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+arr[i];
    }
    int max=0;
    for(ll i=1;i<=n;i++)
    {
        if(sum[i]>max)  max=sum[i];
    }  
    cout<<max<<" ";
    return 0;
};