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
    int x;
    while (cin >> x && x != -1) {
        s.insert(x);
    }
    cout << "Total=" << s.size() << endl;
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}
