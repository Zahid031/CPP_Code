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
        int a=0,b=0;
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='A')
            a++;
            else b++;

        }
        if(a>b)
        cout << "A" << nl;
        else cout << "B" << nl;
    }
  
    return 0;
}