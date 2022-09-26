#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v1;
        vector<int> v2;
        int n, b, c, sum = 0, m = 0;
        cin >> n;
        for (int i = 0; i <n-1; i++)
        {
            cin >> b >> c;
            v1.push_back(b);
            v2.push_back(c);
        }
        for (int i = 0; i < n; i++)
        {
            sum = sum + v1[i] - v2[i];
            if (sum > m)
                m == sum;
        }
        cout << m << endl;
    }
}