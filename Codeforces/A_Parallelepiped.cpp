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
    int x,y,z;
    cin >> x >> y >> z;
    int a=sqrt((z*y)/x);
    int b=z/a;
    int c=y/a;
    cout << 4*(a+b+c) << nl;
  
  return 0;
}