#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, x;
    while (cin >> n >> m)
    {
        set<int> bp;
        int L = 0, R = 0, max = -1, l = 0, jw = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            bp.insert(x);
        }
        for (int i = 0; i < n; i++)
        {
            if (bp.count(i + 1))
            {
                if (i == n - 1)
                {
                    jw = 1;
                }
                if (i - l> max)
                {
                    max = i - l;
                    L = l;
                    R = i - 1;
                }
                l = i + 1;
            }
        }
        if (jw == 0)
        {
            if (n - l > max)
            {
                max = n - l;
                L = l;
                R = n - 1;
            }
        }
        cout << max << endl;
        cout << L + 1 << " " << R + 1 << endl;
    }
    return 0;
}