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
    ll n;cin>>n;
    set<ll>s;
    fo(i,o,n)
    {
        ll x;cin>>x;
        s.insert(x);
    }
    ll q;
    cin>>q;
    fo(i,o,q)
    {
        ll y;
        cin>>y;
        s.erase(y);
    }
    ll k;
    cin>>k;
    ll h=0;
    fo(i,o,k)
    {
        ll x;cin>>x;
        if(s.count(x))  h++;
    }
    float c =(float)h/k;
    cout << fixed << setprecision(2) << c <<" ";
    return 0;
}