#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int a[n][n], num = 1, x = n - 1, y = 0;
        for (int i = 0; i < n / 2; ++i) {
            for (; y < (n - 1) - i; ++y) {
                a[x][y] = num;
                ++num;
            }
            for (; x > i; --x) {
                a[x][y] = num;
                ++num;
            }
            for (; y > i; --y) {
                a[x][y] = num;
                ++num;
            }
            for (; x < (n - 1) - i; ++x) {
                a[x][y] = num;
                ++num;
            }
            --x;
            ++y;
        }
        a[(n - 1) / 2][(n - 1) / 2] = n * n;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(j != 0) {
                    cout << " ";
                }
                cout << a[j][i];
            }
            cout <<endl;
        }
    }
    return 0;
}