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
void isComment(string line)
{
    if (line[0] == '/' && line[1] == '/')
        cout << "Single line comment" << nl;
    else if (line.size() >= 4 && line[line.size() - 2] == '*' && line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*')
        cout << "This is multi line comment" << nl;
    else
        cout << "this is not a comment" << nl;
}
bool isValidIdentifier(string s)
{
    if (!isalpha(s[0]) && s[0] != '_')
        return false;
    for (int i = 1; i < s.length(); i++)
    {
        if (!isalnum(s[i]) && s[i] != '_')
            return false;
    }
    return true;
}

int main()
{
    fast;
    string s = "/* hi dsfdsf  ";
    isComment(s);
    const int MAX_LENGTH = 100;
    char identifier[MAX_LENGTH];

    std::cout << "Enter an identifier: ";
    std::cin >> identifier;

    if (isValidIdentifier(identifier))
        std::cout << "Valid identifier." << std::endl;
    else
        std::cout << "Invalid identifier." << std::endl;

    return 0;
}