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
    int f,fsum=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> f;
        fsum=fsum+f;
    }
    int c=0;
    for(int i=1; i<=5; i++){
        if((fsum+i)%(n+1)==1)
        c++;
    }
    cout << 5-c << nl;
  
  return 0;
}