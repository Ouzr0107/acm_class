#include <iostream>

using namespace std;

int sz(int y, int *year) {
    int count[10], max = 10;
    for (int &i: count) {
        i = 0;
    }
    *year = y / 1000;
    (*(year + 1)) = (y % 1000) / 100;
    (*(year + 2)) = (y % 100) / 10;
    (*(year + 3)) = y % 10;
    for (int i = 0; i < 4; ++i) {
        ++count[*(year + i)];
    }
    for (int i : count) {
        if (i == 0) {
            --max;
        }
    }
    return max;
}

int main() {
    int nf[4];
    int y, x, year;
    while (cin >> year >> x) {
        y = year;
        while (sz(y, nf) != x) {
            ++y;
        }
        cout << y - year << " " << nf[0] << nf[1] << nf[2] << nf[3] << endl;
    }
    return 0;
}