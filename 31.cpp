#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != -1) {
        double a[n], y, x;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        while (cin >> x && x != 0) {
            y = 0;
            for (int i = 0; i < n; ++i) {
                y += a[i] * pow(x, i);
            }
            cout <<fixed<< setprecision(1) << y << endl;
        }
    }
    return 0;
}