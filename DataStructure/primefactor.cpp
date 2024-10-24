#include <iostream>
#include <vector>
using namespace std;

void sieveOfEratosthenes(int n, vector<bool> &prime) {
    for (int i = 0; i <= n; i++) {
        prime[i] = true;
    }
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
}

void primeFactorization(int n) {
    vector<bool> prime(n + 1);
    sieveOfEratosthenes(n, prime);
    cout << "Prime factors of " << n << " are: ";
    for (int i = 2; i*i <= n; i++) {
        while (prime[i] && n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) {
        cout << n;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    primeFactorization(n);
    return 0;
}
