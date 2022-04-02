#include <iostream>
#include <map>

using namespace std;

map<char, char> CRC = {
        {'A', 'A'},
        {'E', '3'},
        {'H', 'H'},
        {'I', 'I'},
        {'J', 'L'},
        {'L', 'J'},
        {'M', 'M'},
        {'O', 'O'},
        {'S', '2'},
        {'T', 'T'},
        {'U', 'U'},
        {'V', 'V'},
        {'W', 'W'},
        {'X', 'X'},
        {'Y', 'Y'},
        {'Z', '5'},
        {'1', '1'},
        {'2', 'S'},
        {'3', 'E'},
        {'5', 'Z'},
        {'8', '8'}
};

int PLD(string s) {
    for (int i = 0; i < s.length() / 2; ++i) {
        if (s[i] != s[s.length() - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int MRD(string s) {
    if (s.length() % 2 != 0) {
        if (CRC.count(s[s.length() / 2])) {
            if (s[s.length() / 2] != CRC.at(s[s.length() / 2])) {
                return 0;
            }
        } else {
            return 0;
        }
    }
    for (int i = 0; i < s.length() / 2; ++i) {
        if (CRC.count(s[i])) {
            if (s[s.length() - i - 1] != CRC.at(s[i])) {
                return 0;
            }
        } else {
            return 0;
        }
    }
    return 1;
}

int main() {
    string s;
    int p, m;
    while (cin >> s) {
        p = PLD(s);
        m = MRD(s);
        if (p == 0 && m == 0) {
            cout << s << " -- is not a palindrome." << endl << endl;
        } else if (p == 1 && m == 0) {
            cout << s << " -- is a regular palindrome." << endl << endl;
        } else if (p == 0 && m == 1) {
            cout << s << " -- is a mirrored string." << endl << endl;
        } else {
            cout << s << " -- is a mirrored palindrome." << endl << endl;
        }
    }
    return 0;
}
