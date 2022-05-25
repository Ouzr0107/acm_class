#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long int N1, N2, key, s[10];
    while (cin >> N1 >> N2 >> key) {
        for (long &i: s) {
            i = 0;
        }
        for (long int i = N1; i <= N2; ++i) {
            long int n = i;
            while (n > 0) {
                ++s[n % 10];
                n /= 10;
            }
        }
        cout << s[key] << endl;
    }
}