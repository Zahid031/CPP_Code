#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n'
using namespace std;

int main()
{
    vector<int> v1, v2;
    // int i, j;
    ll t, a, l, r, c = 0;
    cin >> t;
    int n = t;
    while (t--)
    {
        scanf("%d", &a);
        v1.push_back(a);
        // v2.push_back(a);
    }
    if (is_sorted(v1.begin(), v1.end()))
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (v1[i] > v1[i + 1])
        {
            l = i;
            break;
        }
        else
            c++;
    }
    for (int j = n - 1; j > 0; j--)
    {
        if (v1[j] < v1[j - 1])
        {
            r = j;
            break;
        }
    }
    // cout << l << r << endl;
    int flag = 0;
    reverse(v1.begin() + l, v1.end() - (n - 1 - r)); //-(n-r));
    for (int i = 0; i < v1.size() - 1; i++)
    {
        if (v1[i] > v1[i + 1])
        {
            flag = 1;

            break;
        }
        // else c++;
    }

    if (flag == 0)
    {
        cout << "yes" << endl;
        cout << l + 1 << " " << r + 1 << endl;
        return 0;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}