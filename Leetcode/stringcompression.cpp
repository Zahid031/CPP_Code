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
    vector<char> chars = {'a','a' ,'b', 'b', 'c','c','c'};
    for (int i = 0; i < 6; i++)

        vector<char> v;
    string s = "";
    for (int i = 0; i < chars.size() - 1;)
    {
        int c = 1;
        for (int j = i + 1; j < chars.size(); j++)
        {
            if (chars[i] == chars[j])
            {
                c++;
            }
            else
            {

                break;
            }
        }
        i = i + c;
        if (c > 1)
            s = s + chars[i - 1] + to_string(c);
        else
            s = s + chars[i - 1];
        if (i==chars.size()-1)
            s = s + chars[i];
    }
    cout << s << nl;
    return 0;
}
