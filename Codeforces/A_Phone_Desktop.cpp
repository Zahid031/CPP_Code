#include <bits/stdc++.h> 
#include<cmath>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define nl "\n"
#define pi 3.141592653
const int MAXN = 1e5 + 5;

int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        int ans=(y+1)/2;
        int ans2=15*ans-y*4;
        if(x<=ans2)
        cout << ans << nl;
        else cout << ans+(x-ans2+14)/15 << nl;
   
    }
  
    return 0;
}