#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string a, b;
    int cnt1[26], cnt2[26];
    while (cin >> a >> b) {
        for (int i = 0; i < 26; ++i) {
            cnt1[i] = 0;
            cnt2[i] = 0;
        }
        for (int i = 0; i < a.length(); ++i) {
            ++cnt1[a[i] - 'A'];
            ++cnt2[b[i] - 'A'];
        }
        sort(cnt1, cnt1 + 26);
        sort(cnt2, cnt2 + 26);
        for (int i = 0; i < 26; ++i) {
            if (cnt1[i] != cnt2[i]) {
                cout << "NO" << endl;
                break;
            }
            if (i == 25) {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}