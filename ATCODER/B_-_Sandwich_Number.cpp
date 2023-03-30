#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int c = 0;
    cin >> s;
    int l = s.length();
    if (l == 8)
    {
        for (int i = 1; i < l - 1; i++)
        {
            if (!isdigit(s[i]))
            {
                cout << "No" << endl;
                return 0;
            }
        }

        if (!isupper(s[0]) || !isupper(s[l - 1]))
        {
            cout << "No" << endl;
        }
        else if (s[1] == '0')
            cout << "No" << endl;
        else
        {
            cout << "Yes" << endl;
        }
    }
    else
        cout << "No" << endl;
    return 0;
}