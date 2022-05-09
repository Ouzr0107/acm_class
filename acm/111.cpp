#include <iostream>
#include <algorithm>
#include <map>
#include <stack>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        stack<int> list;
        int in[n], out[n];
        for (int i = 0; i < n; ++i) {
            cin >> out[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> in[i];
        }
        int i = 0, j = 0, flag = 1;
        while (i < n) {
            while (j < n) {
                if (!list.empty() && list.top() == out[i]) {
                    ++i;
                    list.pop();
                    break;
                } else if (out[i] == in[j]) {
                    ++i;
                    break;
                } else {
                    list.push(in[j]);
                    ++j;
                }
            }
            if (j == n) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
    return 0;
}