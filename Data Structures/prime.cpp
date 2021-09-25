#include<bits/stdc++.h>
using namespace std;
#define fo(i,o,n) for(int i=0;i<n;i++)
#define ro(i,o,n) for(int i=n-1;i>=0;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc ll t;cin>>t;while(t--);
typedef long long int  ll;

bool isPrime(int n)
{
    if (n <= 1) return false;
 
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

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
    ll sum = 0;
    fo(i,o,q)
    {
        ll y;cin>>y;
        if(isPrime(y) && s.count(y))   sum+=y; 
    }
    cout<<sum<<" ";
    return 0;
}








ll power(ll x, ll n) {
	ll res = 1;
    n=n%m;
	while (n) {
		if (n & 1) res = res * x %m;

		x = x * x % m;
		n = n >> 1;
	}
	return res;
}