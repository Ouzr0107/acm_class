#include <iostream>
//#include <cmath>

using namespace std;

//long int fw(long int n) {
//    for (int i = 1;; ++i) {
//        if (n < pow(i, 2)) {
//            return i;
//        }
//    }
//}

int main() {
    long int n, x, y;
    while (cin >> n) {
        long int num = 1;
//        long int a[fw(n)][fw(n)];
        x = 0;
        y = 0;
        while (num < n) {
            if (num < n) {
                ++x;
                ++num;
            }
            for (long int i = x; i > 0 && num < n; --i) {
                --x;
                ++y;
                ++num;
            }
            if (num < n) {
                ++y;
                ++num;
            }
            for (long int i = y; i > 0 && num < n; --i) {
                ++x;
                --y;
                ++num;
            }
        }
        cout << y + 1 << "/" << x + 1 << endl;
    }
    return 0;
}