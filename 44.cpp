#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double dd(double a, double b, double c, double d, double x) {
    while (abs(a * pow(x, 3) + b * pow(x, 2) + c * x + d) >= pow(10, -6)) {
        x -= (a * pow(x, 3) + b * pow(x, 2) + c * x + d) / (3 * a * pow(x, 2) + 2 * b * x + c);
    }
    return x;
}

int main() {
    double a, b, c, d, x;
    while (cin >> a >> b >> c >> d >> x) {
        cout << setiosflags(ios::fixed) << setprecision(3) << dd(a, b, c, d, x) << endl;
    }
    return 0;
}