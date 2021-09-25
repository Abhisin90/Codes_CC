// // #include<bits/stdc++.h>
// // using namespace std;
// // #define fo(i,o,n) for(int i=0;i<n;i++)
// // #define ro(i,o,n) for(int i=n-1;i>=0;i--)
// // #define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
// // typedef long long int  ll;

// // signed main()
// // {
// //     fast
// //     ll t;cin>>t;
// //     while(t--)
// //     {
// //         string s,t;cin>>s>>t;
// //         int n=s.size();
// //         int m=t.size();
// //         ll freq[26]={0};
// //         ll freq1[26]={0};
// //         fo(i,o,n)
// //         {
// //             freq[s[i]-'a']++;
// //         }
// //         fo(i,o,m)
// //         {
// //             freq1[t[i]-'a']++;
// //         }
// //         // fo(i,o,26)
// //         // {
// //         //     cout<<freq[i]<<" ";
// //         // }
// //         // cout<<"\n";
// //         // fo(i,o,26)
// //         // {
// //         //     cout<<freq1[i]<<" ";
// //         // }
// //         // cout<<"\n";
// //         ll cn=0;
// //         fo(i,o,26)
// //         {
// //             if(freq[i]<=freq1[i])          cn++;
// //         }
// //         if(cn==26)  cout<<"YES"<<"\n";
// //         else cout<<"NO"<<"\n";
// //     }
// //     return 0;
// // }


// //███████╗ ██████╗ ██╗   ██╗██╗   ██╗███████╗███╗   ██╗ ██████╗ ███████╗██████╗
// //██╔════╝██╔═══██╗██║   ██║██║   ██║██╔════╝████╗  ██║██╔════╝ ██╔════╝██╔══██╗
// //███████╗██║   ██║██║   ██║██║   ██║█████╗  ██╔██╗ ██║██║  ███╗█████╗  ██████╔╝
// //╚════██║██║   ██║██║   ██║╚██╗ ██╔╝██╔══╝  ██║╚██╗██║██║   ██║██╔══╝  ██╔══██╗
// //███████║╚██████╔╝╚██████╔╝ ╚████╔╝ ███████╗██║ ╚████║╚██████╔╝███████╗██║  ██║
// //╚══════╝ ╚═════╝  ╚═════╝   ╚═══╝  ╚══════╝╚═╝  ╚═══╝ ╚═════╝ ╚══════╝╚═╝  ╚═╝
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define range(i, n) for (int i = 0; i < n; i++)
// #define range1(i, n) for (int i = 1; i <= n; i++)
// #define mod9 1000000009
// #define mod7 1000000007
// #define INF 1e18
// #define sp(y) fixed << setprecision(y)
// #define vi vector<int>
// #define setbits(x) __builtin_popcountll(x)
// #define zerobits(x) __builtin_ctzll(x)
// #define test(x) \
//     int x;      \
//     cin >> x;   \
//     while (x--)
// #define ff first
// #define ss second
// #define pii pair<int, int>
// #define mii map<int, int>
// #define mp make_pair
// #define append push_back
// #define pb pop_back
// #define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
// #define input(x) cin >> (x)
// bool compare(int fre1[], int fre2[])
// {
//     for (int i = 0; i < 26; i++)
//     {
//         if (fre1[i] != fre2[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }
// signed main()
// {
//     test(x)
//     {
//         string pattern;
//         cin >> pattern;
//         int n = pattern.size();
//         string word;
//         cin >> word;
//         int m = word.size();
//         int fre1[26] = {0};
//         int fre2[26] = {0};
//         for (int i = 0; i < n; i++)
//         {
//             fre1[pattern[i] - 'a']++;
//             fre2[word[i] - 'a']++;
//         }
//         bool flag = true;
//         for (int i = n; i <=m; i++)
//         {
//             if (compare(fre1, fre2))
//             {
//                 cout << "YES" << endl;
//                 flag = false;
//                 break;
//             }
//             else
//             {
//                 fre2[word[i] - 'a']++;
//                 fre2[word[i - n] - 'a']--;
//             }
//         }
//         // for(int i=0;i<26;i++)
//         // {
//         //     cout<<fre1[i]<<" ";
//         // }
//         // cout<<"\n";
//         // for(int i=0;i<26;i++)
//         // {
//         //     cout<<fre2[i]<<" ";
//         // }
//         // cout<<"\n";
//         if (flag == true)
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }



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
    while(n--)
    {
        string s,t;cin>>s>>t;
        int n=s.size();
        int m=t.size();
        int freq[26]={0};
        int freq1[26]={0};
        fo(i,o,n)
        {
            freq[s[i]-'a']++;
            freq1[t[i]-'a']++;
        }
        bool bg=1;
        for(ll i=n;i<=m;i++)
        {
            for(int j=0;j<26;j++)
            {
                bg=1;
                if(freq1[j]!=freq[j])  
                {
                    bg=0;
                    break;
                }
            }
            if(!bg)
            {
                freq1[t[i]-'a']++;
                freq1[t[i-n]-'a']--;
            }
            else  break;
        }
        if(bg)  cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}