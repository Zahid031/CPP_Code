#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n,m;
    cin >> t;
    while(t--)
    {
    cin >> n >> m;
        long long int sum1=0,sum2=0,sum=0;
        sum1=m*(m+1)/2;
        sum2 = n*(2*m+(n-1)*m)/2;
        sum = sum1+sum2-m;
        cout << sum << endl;
    }
    return 0;
}
