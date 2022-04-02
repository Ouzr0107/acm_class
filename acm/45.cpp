#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

long int gcd(long int a, long int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    long int a, b;
    while (cin >> a >> b) {
        long int k = 1;
        while (gcd(a + k, b + k) != gcd(a, b)) {
            ++k;
        }
        cout << k << endl;
    }
    return 0;
}