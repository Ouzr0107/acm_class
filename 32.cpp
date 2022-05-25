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
    int N;
    while (cin >> N) {
        for (int i = N; i >= 5; --i) {
            if (ss(i)) {
                if (ss(i - 2)) {
                    cout << i - 2<< " " << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}