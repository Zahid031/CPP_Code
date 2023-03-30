
#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
int maxn = 1;
#define mx 40000001
using namespace std;
void solve()
{
    int a, b, c, d, x, y = 0, z, sum = 0, ans = 1, odd = 0, even = 0, res, zero = 0, one = 0;
    map<int, int> mp;
    //map<int,int>mpp;
  //  map<int, int>:: iterator it;
    cin >> a;
    for(int i=0;i<a;i++) 
    {
         x=i*i;
         x%=a;
         mp[x]=i;
         
    }
    cout<<0<<' ';
  for(int i=1;i<a;i++)
   {  
    if(mp[i]>0) 
      {   
        cout<<mp[i]<< " ";
      }
      else 
       {
        cout<< "-1"<< " ";
       }
   }

    
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