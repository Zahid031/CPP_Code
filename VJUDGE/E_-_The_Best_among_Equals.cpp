
#include <bits/stdc++.h>
#define mod 
#define int long long
#define endl '\n'
int maxn = 1;
#define mx 40000001
const int mm=1e9+5;
using namespace std;
void solve()
{
    int a, b, c, d, x, y = 0, z, sum = 0, ans = 0, odd = 0, even = 0, res, zero = 0, one =(-1)*mm;
    map<int, int> mp;
     cin>>a;
     int arr[a],brr[a];
    for(int i=0;i<a;i++)
     {
        cin>>arr[i]>>brr[i];
          sum=max(sum,arr[i]);
     }
     for(int i=0;i<a;i++)
     {
        if(brr[i]>=sum) ans++;
     }
    cout<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}