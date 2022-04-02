#include <iostream>
#include <cmath>

using namespace std;

long long gcm(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcm(b, a % b);
}

int main() {
    int N;
    while (cin >> N) {
        long long a, b, fz = 0, fm = 1, c;
        char s;
        for (int i = 0; i < N; ++i) {
            cin >> a >> s >> b;
            fz = fz * b + a * fm;
            fm *= b;
        }
        long long zs = fz / fm, gys;
        fz -= zs * fm;
        gys = abs(gcm(fz, fm));
        fz /= gys;
        fm /= gys;
        if (fm < 0) {
            fz = -fz;
            fm = -fm;
        }
        if (zs == 0 & fz == 0) {
            cout << 0 << endl;
        } else if (zs != 0) {
            cout << zs;
            if (fz != 0) {
                if (fz < 0) {
                    fz = -fz;
                }
                cout << " " << fz << "/" << fm;
            }
            cout << endl;
        } else if (fz != 0) {
            cout << fz << "/" << fm << endl;
        }
    }
    return 0;
}