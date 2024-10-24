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
int min(int a, int b, int c)
{
    
    if (a <= b && a <= c)
        return a;
 
    else if (b <= a && b <= c)
       return b;
 
    else
        return c;
        
}

int main()
{
    fast;
    int t, n, sum = 0;
    char c;
    cin >> t;
    // cout << min(1,2,t) << nl;
    while (t--)
    {
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                cin >> c;
                if (c == 'X')
                {
                    if(i<5)
                    sum = sum + min(i, j, 11 - j);
                    else sum=sum + min(11-i, j, 11 - j);
                    //  cout  << min(i, j, 11 - j) << nl;
                    //  cout << i << " " << j << " " << 11 - j << nl;
                }
            }
        }
        cout << sum << nl;
        sum = 0;
    }

    return 0;
}