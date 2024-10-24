#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define nl "\n"

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> rowSum(n, 0);
        int totalSum = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int a;
                cin >> a;
                rowSum[i] += a;
                totalSum += a;
            }
        }

        bool isSquare = true;

        // Check for a square
        for (int i = 0; i < n; i++)
        {
            if (rowSum[i] * 2 != totalSum)
            {
                isSquare = false;
                break;
            }
        }

        if (isSquare)
            cout << "SQUARE" << nl;
        else
            cout << "TRIANGLE" << nl;
    }

    return 0;
}
