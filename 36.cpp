#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;

ll qpow(ll a, ll n, ll m) {
    if (n == 0)
        return 1;
    else if (n % 2 == 1)
        return qpow(a, n - 1, m) * a % m;
    else {
        ll temp = qpow(a, n / 2, m) % m;
        return temp * temp % m;
    }
}

int main() {
    long int M, E, N, C;
    while (cin >> M >> E >> N) {
        C = qpow(M, E, N);
        cout << C << endl;
    }
    return 0;
}