#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef vector<char> vi;
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
        int n,k;
        
        cin >> n >> k;
        vi v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int c=0;
        for(int i=0; i<n; i++){
            if(v[i]=='B'){
                c++;
                i=i+k-1;
            }
        }
        cout << c << nl;

    }
  
    return 0;
}