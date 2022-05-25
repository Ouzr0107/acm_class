#include <iostream>

using namespace std;

int main() {
    int N, x, num;
    while (cin >> N && N != -1) {
        for (int i = 0; i < N; ++i) {
            num = 0;
            int n, m, A, B;
            cin >> n >> m >> A >> B;
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < m; ++k) {
                    cin >> x;
                    if (x < A || x > B) {
                        ++num;
                    }
                }
            }
            if (A > B) {
                cout << "No solution" << endl;
            } else if (num == 0) {
                cout << "PM" << endl;

            } else {
                cout << num << endl;
            }
        }
    }
    return 0;
}