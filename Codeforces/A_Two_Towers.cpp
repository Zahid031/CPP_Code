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
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s1;
        string s2;
        cin >> s1 >> s2;
        reverse(s2.begin(),s2.end());
        string s=s1+s2;
        int c=0;
        for(int i=0; i<n+m-1; i++){
            if(s[i]==s[i+1])
            c++;
        }
        if(c>=2)
        cout << "NO" << nl;
        else cout << "YES" << nl;
    }

    return 0;
}