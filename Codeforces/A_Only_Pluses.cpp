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
    int t;
    cin >> t;
    while(t--){
        int a , b, c;
        cin >> a >> b >> c;
        for(int i=1; i<=5; i++){
            if(a<=b && a <= c)
            a++;
            else if(b<=a && b <= c)
            b++;
            else c++;
        }
        cout << a*b*c << nl;
    }
  
    return 0;
}