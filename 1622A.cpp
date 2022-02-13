#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, T, A[1000], a, b, c;
    cin >> T;
    while (T--)
    {
        for (int i = 0; i < 3; i++)
            cin >> A[i];
        {
            sort(A, A + 3);
            a=A[0] ;
            b=A[1] ;
            c=A[2] ;
            
        }
        {
            if (a == b && b == c && c == a && a % 2 == 0)
                cout << "yes" << endl;
            else if (a == b && c % 2 == 0)
                cout << "yes" << endl;
            else if (b == c && a % 2 == 0)
                cout << "yes" << endl;
            else if (c == a && b % 2 == 0)
                cout << "yes" << endl;
            else if (c == a + b)
                cout << "Yes" << endl;

            else
                cout << "No" << endl;
        }
    }
}