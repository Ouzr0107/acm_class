#include <iostream>
#include <algorithm>
#include <map>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int n, x, y, count = 0;
    string str;
    while (cin >> n && n != 0) {
        map<int, int> team;
        queue<int> q_all, q[n];
        ++count;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            for (int j = 0; j < x; ++j) {
                cin >> y;
                team[y] = i;
            }
        }
        cout << "Scenario #" << count << endl;
        while (cin >> str && str != "STOP") {
            if (str == "ENQUEUE") {
                cin >> x;
                if (q[team[x]].empty()) {
                    q_all.push(team[x]);
                }
                q[team[x]].push(x);
            } else {
                cout << q[q_all.front()].front() << endl;
                q[q_all.front()].pop();
                if (q[q_all.front()].empty()) {
                    q_all.pop();
                }
            }
        }
        cout << endl;
    }
    return 0;
}