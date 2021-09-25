// #include<bits/stdc++.h>
// using namespace std;
// #define fo(i,o,n) for(int i=0;i<n;i++)
// #define ro(i,o,n) for(int i=n-1;i>=0;i--)
// #define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define tc ll t;cin>>t;while(t--);
// typedef long long int  ll;
// signed main()
// {
//     fast
//     ll t;cin>>t;
//     ll a[t];
//     fo(i,o,t)
//     {
//         cin>>a[i];
//     }
//     ll l,h;
//     cin>>l>>h;
//     ll cn=0;
//     fo(i,o,t)
//     {
//         if(a[i]>=l && a[i]<=h)  cn++;
//     }
//     cout<<cn<<" ";
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// #define fo(i,o,n) for(int i=0;i<n;i++)
// #define ro(i,o,n) for(int i=n-1;i>=0;i--)
// #define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define tc ll t;cin>>t;while(t--);
// typedef long long int  ll;
// signed main()
// {
//     fast
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n,k;
//         cin>>n>>k;
//         ll u=k;
//         vector<ll>a;
//         fo(i,o,n)  
//         {
//             ll x;
//             cin>>x;
//             a.push_back(x);
//         }
//         vector<ll>b;
//         b=a;
//         sort(b.begin(),b.end()-1);
//         reverse(b.begin(),b.end());
//         while(k--)
//         {
//             ll x=b[b.size()-1];
//             // auto it = find(b.begin(),b.end(),x);
//             b.pop_back();
//             auto yu = remove(a.begin(),a.end(),x);
//         }

//         vector<int> v;
//         for (auto &it : a)
//         {
//             v.push_back(it);
//         }
//         for (int i = 0; i < n - u; i++)
//         {
//             cout << v[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;
// #define fo(i,o,n) for(int i=0;i<n;i++)
// #define ro(i,o,n) for(int i=n-1;i>=0;i--)
// #define fast  ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define tc ll t;cin>>t;while(t--);
// typedef long long int  ll;


// ll secondi(ll arr[], ll n) {
//     ll first = 0, second = -1;
//     for (ll i = 1; i < n; i++) {
//         if (arr[i] > arr[first]) {
//             second = first;
//             first = i;
//         }
//         else if (arr[i] < arr[first]) {
//             if (second == -1 || arr[second] < arr[i])
//                 second = i;
//         }
//     }
//     return second;
// }

// signed main()
// {
//     fast
//     ll t;cin>>t;
//     while(t--)
//     {
//         ll n;cin>>n;
//         ll a[n];
//         fo(i,o,n)  cin>>a[i];
//         ll max=a[0];
//         ll maxi=0;
//         fo(i,o,n)
//         {
//             if(a[i]>max) 
//             {
//                 max=a[i];
//                 maxi=i;  
//             }
//         }
//         ll max2 =  secondi(a,n);
//         sort(a,a+n);
//         if(a[n-1]-a[n-2]>2  || (a[n-1]-a[n-2]==1 && maxi>max2 ))  cout<<"Jack"<<"\n";
//         else cout<<"Rose"<<"\n";

//     }
//     return 0;
// }








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
// signed main()
// {
//     test(x)
//     {
//         int n, k;
//         cin >> n >> k;
//         int a[n];
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
//         stack<int> s;
//         if (n == 1)
//         {
//             if (k == 0)
//                 cout << a[0] << endl;
//             else if (k == 1)
//                 cout << endl;
//             continue;
//         }

//         s.push(a[0]);

//         for (int i = 1; i < n; ++i)
//         {
//             while ((!s.empty()) && (a[i] > s.top()) && (k > 0))
//             {
//                 --k;
//                 s.pop();
//             }
//             s.push(a[i]);
//         }

//         while (k > 0)
//         {
//             s.pop();
//             --k;
//         }

//         int m = s.size();
//         vector<int> v(m);
//         for (int i = 0; i < m; ++i)
//         {
//             v[m - 1 - i] = s.top();
//             s.pop();
//         }

//         for (int i = 0; i < m; ++i)
//             cout << v[i] << " ";

//         cout << endl;
//     }
//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define range(i, n) for (int i = 0; i < n; i++)
#define range1(i, n) for (int i = 1; i <= n; i++)
#define mod9 1000000009
#define mod7 1000000007
#define INF 1e18
#define sp(y) fixed << setprecision(y)
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define test(x) \
    int x;      \
    cin >> x;   \
    while (x--)
#define ff first
#define ss second
#define pii pair<int, int>
#define mii map<int, int>
#define mp make_pair
#define pb push_back
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define input(x) cin >> (x)
signed main()
{
    test(x)
    {
        ll n,k;
        cin>>n>>k;
        ll i = 0;
        deque<ll> s;
        vector<ll> vec(n);
        for(i = 0;i<n;i++)
        {
            cin>>vec[i];
        }
        ll cc = 0;
        for(i = 0;i<n;i++)
        {
            if(s.empty() || s.back()>vec[i])
            {
                s.pb(vec[i]);
            }
            else
            {
                while(!s.empty() && (cc != k) && s.back()<vec[i] )
                {
                    s.pop_back();
                    cc++;
                }
 
                s.pb(vec[i]);
                if(cc == k)
                {
                    i++;
                    for(;i<n;i++)
                        s.pb(vec[i]);
                }
            }
        }
        while(!s.empty())
        {
            ll ans = s.front();
            cout<<ans<<" ";
            s.pop_front();
        }
        cout<<endl;
    }
 
}