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
    set<int> s;
    string stt;
    int x;
    while (cin >> stt >> x) {
        if (stt == "IN") {
            s.insert(x);
        } else {
            s.erase(x);
        }
    }
    cout << "Total=" << s.size() << endl;
    set<int>:: iterator it;
    for (it = s.begin(); it != s.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}
