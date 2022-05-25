#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<set>
#include<vector>
#include<map>
#include<queue>
#include<stack>

using namespace std;

int main() {
    vector<int> pro;
    vector<int>::iterator it;
    int a, b, count, cas = 0;
    while (cin >> a && a != 0) {
        count = 0;
        ++cas;
        for (int i = 0; i < a; ++i) {
            cin >> b;
            pro.push_back(b);
        }
        sort(pro.begin(), pro.end());
        for (int i = 0; i < 5; ++i) {
            cin >> b;
            it = find(pro.begin(), pro.end(), b);
            if (it != pro.end()) {
                ++count;
                pro.erase(it);
            }
        }
        cout << "CASE #" << cas << endl;
        if (count >= 3) {
            cout << "Xiaoming win!" << endl;
        } else {
            cout << "Store win!" << endl;
        }
    }
    return 0;
}
