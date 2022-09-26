#include <iostream>
using namespace std;
int main()
{
    int t, m[2][2];
    cin >> t;
    while (t--)
    {
        int count = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> m[i][j];
                if (m[i][j] == 1)
                    count++;
            }
        }
        if (count == 1 || count == 2 || count == 3)
            cout << 1 << endl;
        else if(count == 4)
            cout << 2 << endl;
        else cout << 0 << endl;
    }
}