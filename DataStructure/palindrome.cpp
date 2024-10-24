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
    string s;
    cin >> s;
    int l = s.length();
    bool flag = true;
    for (int i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - 1 - i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "palindrome";
    else
        cout << "Not";
        cout << abs('a') << endl;
    return 0;
}