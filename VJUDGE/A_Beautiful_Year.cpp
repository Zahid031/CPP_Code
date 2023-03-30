#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y += 1;
        string s = to_string(y);
        set<int> uniDigi(s.begin(), s.end());
        if (s.size() == uniDigi.size())
        {
            cout << s << endl;
            return 0;
        }
    }

    // return 0;
}