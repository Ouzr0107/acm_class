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

void sz(long int y, int *year) {
    for (int i = 0; i < 10; ++i) {
        (*(year + i)) = y % (int) pow(10, 10 - i) / pow(10, 9 - i);
    }
}

int main() {
    long int n, t;
    while (cin >> n) {
        long int x = n;
        int sw[10];
        t = 0;
        while (x != 1 && x != 4) {
            sz(x, sw);
            x = 0;
            for (int i: sw) {
                x += (int) pow(i, 2);
            }
            ++t;
        }
        if (x == 1) {
            if (ss(n)) {
                t *= 2;
            }
            cout << n << " " << t << " " << "H" << endl;
        } else {
            cout << n << " " << t << " " << "U" << endl;
        }
    }
    return 0;
}