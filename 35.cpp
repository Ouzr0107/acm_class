#include <iostream>
#include <cmath>

using namespace std;

int ss(long int x) {
    for (long int i = 2; i <= sqrt(x); ++i) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    while (cin >> n) {
        for (int i = 2; i < n; ++i) {
            if (ss(i) && ss(n - i)) {
                cout << i << " " << n - i << endl;
                break;
            }
        }
    }
    return 0;
}