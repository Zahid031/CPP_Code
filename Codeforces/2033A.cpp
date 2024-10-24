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

int main()
{
    fast;

    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
        int n;  // Size of the matrix
        cin >> n;
        
        vector<vector<int>> matrix(n, vector<int>(n));
        
        // Input matrix
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }
        
        int magic_count = 0;  // To count total magic operations needed
        
        // We check all diagonals that are possible
        for (int start = 0; start < n; ++start) {
            // Check the main diagonal starting from (start, start)
            int i = start;
            int j = start;
            while (i < n && j < n) {
                if (matrix[i][j] < 0) {
                    // If there's a negative element, count the magnitude of how much it needs to be incremented
                    magic_count += -matrix[i][j];  // We need to increment this many times
                }
                i++;
                j++;
            }
        }
        
        // Output the result for this test case
        cout << magic_count << endl;
    }
    
    return 0;
}


