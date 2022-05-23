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
    int k;
    while (cin >> k)
    {
        int a[k], L = 0, count = 0, jw = 0;
        map<int, int> num;
        Pair pair[k / 2 + 1];
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
            num[a[i]]++;
            if (num[a[i]] == 2)
            {
                if (i == k - 1)
                {
                    jw = 1;
                }
                pair[count].l = L;
                pair[count].r = i;
                L = i + 1;
                count++;
                num.clear();
            }
        }
        if (count == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if (jw == 0)
            {
                pair[count - 1].r = k - 1;
            }
            cout << count << endl;
            for (int i = 0; i < count; i++)
            {
                cout << pair[i].l + 1 << " " << pair[i].r + 1 << endl;
            }
        }
    }
    return 0;
}