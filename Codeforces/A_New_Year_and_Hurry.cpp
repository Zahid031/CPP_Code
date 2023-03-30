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
    int n,k;
    int c=0,sum=0;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        sum=sum+i*5;
        if(sum+k<=240)
        c++;
        else break;
    }
    cout << c << nl;
  
  return 0;
}