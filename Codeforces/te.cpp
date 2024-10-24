#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int totalTents = 0;
        totalTents += a;

        totalTents += b / 3;
        b %= 3;
        if (b == 1) {
            if (c >= 2) {
                totalTents += 1; // Accommodate one extrovert with two universals
                c -= 2;
            } else {
                cout << "-1" << endl; // Not enough universals to accommodate extrovert
                continue;
            }
        }

        // Handle remaining universals
        if (c > 0) {
            totalTents += c / 3;
            if (c % 3 != 0) {
                totalTents++;
            }
        }

        cout << totalTents << endl;
    }

    return 0;
}
