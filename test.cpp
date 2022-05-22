#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

struct Bridge
{
    int a, b, t;
    Bridge(){};
    Bridge(int a, int b, int t) : a(a), b(b), t(t){};
};

int find(int x, int pre[])
{
    if (x == pre[x])
    {
        return x;
    }
    return find(pre[x], pre);
}

bool unite(int a, int b, int* pre)
{
    if (find(a, pre) == find(b, pre))
    {
        return false;
    }

    return true;
}

bool cmp(Bridge a, Bridge b)
{
    return a.t > b.t;
}

int main()
{
    int n, m, a, b, t;
    while (cin >> n >> m)
    {
        int pre[n], ans = 0, lastday = 0;
        Bridge bridge[m];
        for (int i = 0; i <= n; i++)
        {
            pre[i] = i;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b >> t;
            bridge[i] = Bridge(a, b, t);
        }
        sort(bridge, bridge + m, cmp);
        for (int i = 0; i < m; i++)
        {
            if (unite(bridge[i].a, bridge[i].b, pre) && lastday != bridge[i].t)
            {
                ++ans;
                lastday = bridge[i].t;
            }
        }
        cout << lastday + 1 << " " << ans << endl;
    }
    return 0;
}