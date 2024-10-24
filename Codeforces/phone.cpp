#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        int x, y;
        cin >> x >> y;

        // Total cells needed
        int total_cells = 4 * y + x;

        // Calculate number of screens required
        int screens_needed = (total_cells + 14) / 15;
        results[i] = screens_needed;
    }

    for (int i = 0; i < t; ++i) {
        cout << results[i] << endl;
    }

    return 0;
}
