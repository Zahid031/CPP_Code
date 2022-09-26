#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, t;
    cin >> t;
        cin >> r >> c;
        if (r == 1 || c == 1 || r == 15 || c == 15)
        {
            cout << "black" << endl;
        }
        else if (r == 2 || r == 14 || c == 2 || c == 14)
        {
            cout << "white" << endl;
        }
        else if (r == 3 || r == 13 || c == 3 || c == 13)
        {
            cout << "black" << endl;
        }
        else if (r == 4 || r == 12 || c == 4 || c == 12)
        {
            cout << "white" << endl;
        }
        else if (r == 5 || r == 11 || c == 5 || c == 11)
        {
            cout << "black" << endl;
        }
        else if (r == 6 || r == 10 || c == 6 || c == 10)
        {
            cout << "white" << endl;
        }
        else if (r == 7 || r == 9 || c == 7 || c == 9)
        {
            cout << "black" << endl;
        }
        else
            cout << "white" << endl;
    return 0;
}