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
    int c = 0;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string s4 = s1 + s2;
    if (s3.length() != s4.length())
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = 0; i < s4.length(); i++)
        {
            {
                for (int j = 0; j < s3.length(); j++)
                {
                    if (s4[i] == s3[j])
                    {
                        c++;
                        s3.erase(s3.begin() + j);
                        break;
                    }
                }
            }
        }
        //cout << c << nl;
        if (c == s4.length())
        {
            cout << "YES" << nl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}