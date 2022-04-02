#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    while (cin >> N && N != -1) {
        int s[N];
        for (int i = 0; i < N; ++i) {
            cin >> s[i];
        }
        while (cin >> M && M != 0) {
            int t[N];
            for (int i = 0; i < N; ++i) {
                t[i] = s[N - i - 1];
            }
            for (int i = 0; i < N; ++i) {
                if (i < M % N) {
                    s[i] = t[M % N - i - 1];
                } else {
                    s[i] = t[N - (i - M % N) - 1];
                }
                if (i == 0) {
                    cout << s[i];
                } else {
                    cout << " " << s[i];
                }
            }
            cout << endl;
        }
    }
    return 0;
}
