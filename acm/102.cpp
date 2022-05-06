#include <iostream>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

typedef struct {
    string c;
    int count;
} value;

int main() {
    string x;
    map<string, value> word;
    set<string> result;
    int count = 0;
    while (cin >> x) {
        while (x != "#") {
            string temp = x;
            transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
            sort(temp.begin(), temp.end());
            ++word[temp].count;
            if (word[temp].count == 1) {
                word[temp].c = x;
            }
            cin >> x;
        }
        for (map<string, value>::iterator it = word.begin(); it != word.end(); ++it) {
            if (it->second.count == 1) {
                result.insert(it->second.c);
            }
        }
        for (set<string>::iterator it = result.begin(); it != result.end(); ++it) {
            cout << *it << endl;
        }
        word.clear();
    }
    return 0;
}