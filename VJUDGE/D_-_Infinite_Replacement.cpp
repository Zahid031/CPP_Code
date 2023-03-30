#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        string p, q;
        cin >> p >> q;
        bool result = find(q.begin(), q.end(), 'a') != q.end();
        long long int r = pow(2, q.size());
        if (result)
        {
            if (q.size() >= 2)
            {
                cout << "-1" << endl;
            }
            else
                cout << "1" << endl;
        }

        else
            cout << r << endl;
    }
    return 0;
}