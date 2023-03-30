#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int j = 0; j < s.size(); j++)
    {
        if (s[j] == '-' && s[j + 1] == '.')
        {
            cout << "1";
            j++;
        }
        else if (s[j] == '-' && s[j + 1] == '-')
        {
            cout << "2";
            j++;
        }
        else
            cout << "0";
    }
    return 0;
}