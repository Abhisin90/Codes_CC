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
    int N,M;cin>>N>>M;
    ll A[N];
    ll B[M];
    fo(i,o,N) cin>>A[i];
    fo(i,o,M) cin>>B[i];
    map<int,int>m;
	    map<int,int>n;
	    for(long long  i=0;i<N;i++)
	    {
	        m[A[i]]++;
	    }
	    for(long long i=0;i<M;i++)
	    {
	        n[B[i]]++;
	    }
	    vector<int>v;
	    for(long long i=0;i<N;i++)
	    {
	        if(n.find(A[i])==n.end())  v.push_back(A[i]);
	    }
	    for(auto &i:v)
	    {
	        cout<<i<<" ";
        }
    return 0;
}