#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, n;
    cin >> s;
    if (s[0] >= 'A' && s[0] <= 'Z')
    {
        cout << s << endl;
    }
    else
    {
        s[0] = toupper(s[0]);
        cout << s << endl;
    }

    return 0;
}