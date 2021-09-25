#include<bits/stdc++.h>
using namespace std;
#define fo(i,o,n) for(int i=0;i<n;i++)
#define ro(i,o,n) for(int i=n-1;i>=0;i--)
#define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int  ll;

signed main()
{
    fast
    ll t;cin>>t;
    while(t--)
    {
        bool bg=1;
        string s,t;cin>>s>>t;
        int n=s.size();
        int m=t.size();
        ll freq[26]={0};
        ll freq1[26]={0};
        fo(i,o,n)
        {
            freq[s[i]-'a']++;
        }
        fo(i,o,m)
        {
            freq1[t[i]-'a']++;
        }

        fo(i,o,26)
        {
            if(freq[i]>freq1[i])  
            {
                bg=0;
                break;
            }
        }
        if(bg)  cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}