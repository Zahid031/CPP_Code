#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, ns;
    int upper = 0, lower = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            upper++;
        else
            lower++;
    }
    if (upper > lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }

    return 0;
}