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
//#define pi 314159265358979323846264338327
const int MAXN = 1e5 + 5;

int main()
{
    fast;
    int t;
    string pi="314159265358979323846264338327";
    cin >> t;
    while (t--)
    {
        int c=0;
        string s;
        cin >> s;
        for(int i=0; i<s.length(); i++){
            if(s[i]==pi[i])
            c++;
            else break;
        }
        cout << c << nl;

    }

    return 0;
}