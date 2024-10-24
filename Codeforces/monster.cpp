#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string can_survive(int n, int k, vector<int>& health, vector<int>& positions) {
    int min_position = *min_element(positions.begin(), positions.end());
    int max_position = *max_element(positions.begin(), positions.end());
    int min_health = *min_element(health.begin(), health.end());

    if (min_position <= 0 && min_health > k) {
        return "NO";
    } else {
        while (max_position > 0) {
            auto it = find(positions.begin(), positions.end(), max_position);
            if (it == positions.end()) {
                return "NO";
            }

            int index = distance(positions.begin(), it);
            int damage = min(k, health[index]);

            for (int i = 0; i < positions.size(); ++i) {
                if (positions[i] == max_position) {
                    health[i] -= damage;
                }
            }

            positions.erase(remove(health.begin(), health.end(), 0), health.end());
            positions.erase(remove(positions.begin(), positions.end(), 0), positions.end());

            max_position--;
        }

        return "YES";
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        vector<int> health(n);
        vector<int> positions(n);

        for (int j = 0; j < n; j++) {
            cin >> health[j];
        }

        for (int j = 0; j < n; j++) {
            cin >> positions[j];
        }

        string result = can_survive(n, k, health, positions);
        cout << result << endl;
    }

    return 0;
}