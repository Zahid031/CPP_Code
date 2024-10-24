#include <bits/stdc++.h>
using namespace std;
void primefactor(int n)
{
    for (int i = 2; i * i < n; i++)
    {
       
            while (n%i== 0)
            {
                n = n / i;
                cout << i << endl;
            }
        }
    if (n > 1)
        cout << n << endl;
}
int gcd(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    int a ,b;
    cin >> a >> b;
    int r=gcd(a,b);
    cout << r << endl;
    //primefactor(n);
}