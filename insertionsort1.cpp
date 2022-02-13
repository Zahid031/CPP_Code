#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >>  A[i];
    }
    for (int j = 1; j < n; j++)
    {
        int current = A[j];
        k = j - 1;
            while(k>=0 && current<A[k])
        {
            A[k+ 1] = A[k];
            k--;
        }
        A[k+1]=current;
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}