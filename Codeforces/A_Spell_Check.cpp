#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s = "Timur";
    sort(s.begin(), s.end());
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string name;
        cin >> name;
        sort(name.begin(), name.end());
        if (s == name)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}