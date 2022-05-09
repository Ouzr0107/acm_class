#include <iostream>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        queue<int> list;
        for (int i = 0; i < n; ++i) {
            list.push(i + 1);
        }
        for (int i = 0; i < n - 1; ++i) {
            cout << list.front() << " ";
            list.pop();
            list.push(list.front());
            list.pop();
        }
        cout << list.front() << endl;
    }
    return 0;
}