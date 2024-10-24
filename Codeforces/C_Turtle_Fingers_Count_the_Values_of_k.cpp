#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> prime_factors(int n) {
  vector<int> factors;
  for (int i = 2; i * i <= n; ++i) {
    while (n % i == 0) {
      factors.push_back(i);
      n /= i;
    }
  }
  if (n > 1) {
    factors.push_back(n);
  }
  return factors;
}

int solve(int a, int b, int l) {
  vector<int> factors = prime_factors(l);
  int distinct_k = 0;
  for (int x1 = 0; x1 <= factors[0]; ++x1) {
    for (int x2 = 0; x2 <= factors[1]; ++x2) {
      // ... (repeat for all prime factors)
      long long k = 1LL * l / (pow(a, x1) * pow(b, x2));
      if (k > 0 && k == (long long)k) { // Check for integer k
        distinct_k++;
      }
    }
  }
  return distinct_k;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, l;
    cin >> a >> b >> l;
    cout << solve(a, b, l) << endl;
  }
  return 0;
}
