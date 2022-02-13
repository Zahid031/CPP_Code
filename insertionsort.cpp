#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int j = 1; j < n; j++)
    {
        int key = A[j];
        int k = j - 1;
        while (k >= 0 && key < A[k])
        {
            A[k + 1] = A[k];
            k = k - 1;
        }
        A[k + 1] = key;
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}