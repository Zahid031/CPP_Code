#include <bits/stdc++.h> 
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
    int n;
    ll s=0;
    cin >> n;
    vi v(7);
    for(int i=0; i<7; i++){
        cin >> v[i];
        s=s+v[i];
    }
    ll sum=0,i=0;
    while(1){
        sum=sum+v[i];
        if(sum>=n)
        {
            cout << (i+1) << nl;
            return 0;
        }
        i=(i+1)%7;
    }
  
  return 0;
}