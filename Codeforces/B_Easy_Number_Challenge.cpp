#include <bits/stdc++.h>
using namespace std;
#define maxn 1000010
int s[maxn] ;//= {0};
int sum[maxn];// = {0};
int main()
{
    for (int i = 1; i <= maxn; i++)
    {
        for (int j = i; j <= maxn; j += i)
        {
            sum[j]++;
        }
    }
    int a, b, c;
    while (~scanf("%d %d %d", &a, &b, &c))
    {
        int sum1 = 0;
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                for (int h = 1; h <= c; h++)
                {
                    sum1 = (sum1 + sum[i * j * h]) % 1073741824;
                }
            }
        }
        printf("%d\n", sum1);
    }
}
