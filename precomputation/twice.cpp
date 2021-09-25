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
    int n,k;cin>>n>>k;
    vector<int>Arr;
    fo(i,o,n)
    {
        int x;cin>>x;
        Arr.pb(x);
    }
    sort(Arr.begin(),Arr.end());
        reverse(Arr.begin(),Arr.end());
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=Arr[i];
        }
        cout<<sum;  
    
    return 0;
}
