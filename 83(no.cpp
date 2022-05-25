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
    set<int> s1;
    int a, b, c, d, e, count = 0;
    string x;
    while (cin >> x) {
        s.clear();
        for (int i = 0; i < x.length(); ++i) {
            s.insert((int)x[i] - 48);
        }
        s1.clear();
        for (int i = 100; i < 1000; ++i) {
            a = i;
            for (int j = 0; j < 3; ++j) {
                s1.insert(a % 10);
                a /= 10;
            }
            for (int j = 10; j < 100; ++j) {
                a = j;
                for (int k = 0; k < 2; ++k) {
                    s1.insert(a % 10);
                    b = (a % 10) * i;
                    for (int l = 0; l < 4; ++l) {
                        s1.insert(b % 10);
                        b /= 10;
                    }
                    a /= 10;
                }
                c = i * j;
                for (int k = 0; k < 5; ++k) {
                    s1.insert(c % 10);
                    c /= 10;
                }
                if (s.size() == s1.size()) {
                    ++count;
                    cout << "CASE #" << count << endl;
                    cout << "<" << count << ">" << endl;
                    cout <<
                }
            }
        }
    }
    return 0;
}
