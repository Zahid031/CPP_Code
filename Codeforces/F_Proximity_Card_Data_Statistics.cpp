#include <bits/stdc++.h>
using namespace std;
map<string, int> mp1;
map<int, int> mp2;
bool cmp1(const pair<string, int> &a, const pair<string, int> &b)
{
    return a.first < b.first;
}
bool cmp2(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char s[30];
        int year, month, day, hour, minute, second;
        scanf("%d/%d/%d#%d:%d:%d", &day, &month, &year, &hour, &minute, &second);
        string email, id;
        int day2, month2, year2;
        char bld[10];
        cin >> email >> s;
        sscanf(s, "%d/%d/%d", &day2, &month2, &year2);
        cin >> bld;
        mp1[bld]++;
        mp2[year2]++;
    }
    vector<pair<string, int>> v1;
    vector<pair<int, int>> v2;
    for (map<string, int>::iterator i = mp1.begin(); i != mp1.end(); i++)
        v1.push_back(*i);
    for (map<int, int>::iterator i = mp2.begin(); i != mp2.end(); i++)
        v2.push_back(*i);
    sort(v1.begin(), v1.end(), cmp1);
    sort(v2.begin(), v2.end(), cmp2);
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i].first << " " << v1[i].second << endl;
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i].first << " " << v2[i].second << endl;
    return 0;
}
