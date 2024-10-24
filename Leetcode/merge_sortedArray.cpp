#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define nl "\n"
#define pi 3.141592653
const int MAXN = 1e5 + 5;
// class Solution
// {
// public:
//     void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
//     {
//         if (m < n)
//         {
//             for (int i = m; i < m + n; i++)
//             {
//                 nums1.push_back(nums2[i]);
//             }
//         }
//         else
//         {
//             for (int i = n; i < m + n; i++)
//             {
//                 nums1.push_back(nums2[i]);
//             }
//             sort(nums1.begin(), nums1.end());
//         }
//     }
// };

int main()
{
    fast;
    // int ar[]={1,2,3,4};
    // int ar2[]={4,5,6};
    // merge(ar, 4, ar2, 3);
    string s = "Zahid";
    cout << s.length() << nl;
    cout << s[0] << s[4];
    return 0;
}

// class Solution
// {
// public:
//     int mySqrt(int x)
//     {
//         if (x == 0 || x == 1)
//             return x;
//         else
//         {
//             int l = 1, r = x, mid;
//             while (l < r)
//             {
//                 mid = l + (r - l) / 2;
//                 if (mid == x / mid)
//                     return x;
//                 else if (mid > x / mid)
//                     l = mid - 1;
//                 else
//                     r = mid + 1;
//             }
//             return r;
//         }
//     }
// };

bool vowel(char x)
{
    if (x == 'a' || x == 'e' || x == 'i' ||
        x == 'o' || x == 'u' || x == 'A' ||
        x == 'E' || x == 'I' || x == 'O' || x == 'U')
        return true;
    else
        return false;
}

class Solution
{
public:
    string reverseVowels(string s)
    {
        bool vowel(char x)
        {
            if (x == 'a' || x == 'e' || x == 'i' ||
                x == 'o' || x == 'u' || x == 'A' ||
                x == 'E' || x == 'I' || x == 'O' || x == 'U')
                return true;
            else
                return false;
        }
        vector<char> v;
        for (int i = 0; i < s.length(); i++)
        {
            if (vowel(s[i]))
            {
                v.push_back(s[i]);
            }
        }
        v.reverse();
        l = v.size();
        int j = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (vowel(s[i]))
            {
                s[i] == v[j];
                j++
            }
        }
        return s;
    }
};
