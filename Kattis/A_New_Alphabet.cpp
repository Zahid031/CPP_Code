#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (auto i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'A')
            s[i] = '@';
        else if (s[i] == 'b' || s[i] == 'B')
            s[i] = '8';

        else if (s[i] == 'c' || s[i] == 'C')
            s[i] = '(';
        else if (s[i] == 'd' || s[i] == 'D')
            s[i] = '|)';
        else if (s[i] == 'e' || s[i] == 'E')
            s[i] = '3';
        else if (s[i] == 'f' || s[i] == 'F')
            s[i] = '#';
        else if (s[i] == 'g' || s[i] == 'G')
            s[i] = '6';
        else if (s[i] == 'h' || s[i] == 'H')
            s[i] = '[-]';
        else if (s[i] == 'i' || s[i] == 'I')
            s[i] = '|';
        else if (s[i] == 'j' || s[i] == 'J')
            s[i] = '_|';
        else if (s[i] == 'k' || s[i] == 'K')
            s[i] = '|<';
        else if (s[i] == 'l' || s[i] == 'L')
            s[i] = '1';
        else if (s[i] == 'm' || s[i] == 'M')
            s[i] = '[]\/[]';
        else if (s[i] == 'n' || s[i] == 'N')
            s[i] = '[]\[]';
        else if (s[i] == 'o' || s[i] == 'O')
            s[i] = '0';
        else if (s[i] == 'p' || s[i] == 'P')
            s[i] = '|D';
        else if (s[i] == 'q' || s[i] == 'Q')
            s[i] = '(,)';
        else if (s[i] == 'r' || s[i] == 'R')
            s[i] = '|Z';
        else if (s[i] == 's' || s[i] == 'S')
            s[i] = '$';
        else if (s[i] == 't' || s[i] == 'T')
            s[i] ='][';
        else if (s[i] == 'u' || s[i] == 'U')
            s[i] = '|_|';
        else if (s[i] == 'v' || s[i] == 'V')
            s[i] = '\/';
        else if (s[i] == 'w' || s[i] == 'W')
            s[i] = '\/\/';
        else if (s[i] == 'x' || s[i] == 'X')
            s[i] = '}{';
        else if (s[i] == 'y' || s[i] == 'Y')
            s[i] = '`/';
        else if (s[i] == 'z' || s[i] == 'Z')
            s[i] = '2';
    }
    cout << s << endl;

    return 0;
}