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
    string s1, s2;
    cin >> s1 >> s2;
    for(auto i=0; i<s1.length(); i++){
        if(s1[i]==s2[i])
        cout << "0";
        else cout << "1";
    }
    cout << nl;

    return 0;
}