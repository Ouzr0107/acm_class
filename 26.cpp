#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int t = 0;
        for (int i = 1; i < sqrt(n); ++i) {
            if (n % i == 0) {
                t += 2;
            }
        }
        if (pow((int)sqrt(n), 2) == n) {
            ++t;
        }
        cout << t << endl;
    }
    return 0;
}