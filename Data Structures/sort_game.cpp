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
        ll n;
        cin>>n;
        ll a[n];
        fo(i,o,n)       cin>>a[i];
        sort(a,a+n);
        cout<<a[0]+a[n-1]<<"\n";
    }
    return 0;
}