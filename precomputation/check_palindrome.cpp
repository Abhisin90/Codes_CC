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
        int n,q;
        cin>>n>>q;
        string s;cin>>s;
        int freq[100000][26]={0};
        fo(i,o,n)
        {
            freq[i+1][s[i]-'a']++;
        }
        ll pre[100000][26]={0};
        fo(i,o,n)
        {
            fo(j,o,26)
            {
                pre[i+1][j]=pre[i][j]+freq[i+1][j];
            }
        }
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            fo(i,o
        }

    }
    return 0;
}