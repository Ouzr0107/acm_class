#include <iostream>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

struct Pair
{
    int l, r;
};

int main()
{
    int n, m, x;
    while (cin >> n >> m && n != 0)
    {
        set<int> bp;
        Pair pair[n / 2 + 1];
        int jw = 0, L = 0, count = 0, index[n];
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
                pair[count].l = L;
                pair[count].r = i - 1;
                for (int j = L; j < i; j++)
                {
                    index[j] = count;
                }
                count++;
                L = i + 1;
            }
        }
        if (jw == 0)
        {
            pair[count].l = L;
            pair[count].r = n - 1;
            for (int i = L; i < n; i++)
                {
                    index[i] = count;
                }
        }
        while (cin >> x && x != 0)
        {
            if (x < 1 || x > n)
            {
                cout << "OUT_OF_RANGE" << endl;
            }
            else if (bp.count(x))
            {
                cout << "Broken" << endl;
            }
            else
            {
                cout << pair[index[x - 1]].l + 1<< " " << pair[index[x - 1]].r + 1<< endl;
            }
        }
    }

    return 0;
}