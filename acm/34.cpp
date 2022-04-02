#include <iostream>
#include <cmath>

using namespace std;

int sz(int n, int num) {
    int sum = 0, v = num;
    for (int i = 0; i < n; ++i) {
        sum += pow(v % 10, n);
        v /= 10;
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    while (cin >> n) {
        for (int i = pow(10, n - 1); i < pow(10, n); ++i) {
            if (sz(n, i)) {
                cout << i << endl;
            }
        }
    }
    return 0;
}