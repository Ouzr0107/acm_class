#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M) {
        int s[N];
        for (int i = 0; i < N; ++i) {
            cin >> s[i];
        }
        for (int i = 0; i < M; ++i) {
            int temp = s[N - 1];
            for (int j = N - 1; j > 0; --j) {
                s[j] = s[j - 1];
            }
            s[0] = temp;
        }
        for (int i = 0; i < N; ++i) {
            if (i == 0) {
                cout << s[i];
            } else {
                cout << " " << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
