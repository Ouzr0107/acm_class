#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int find(int a, int town[])
{
    if (a == town[a])
    {
        return a;
    }
    return find(town[a], town);
}

void unit(int a, int b, int town[])
{
    int x = find(a, town), y = find(b, town);
    if (x != y)
    {
        town[x] = y;
    }
}

int main()
{
    int N, M, a, b;
    while (cin >> N && N != 0)
    {
        cin >> M;
        int town[N + 1];
        set<int> road;
        for (int i = 0; i < N + 1; i++)
        {
            town[i] = i;
        }
        for (int i = 0; i < M; i++)
        {
            cin >> a >> b;
            unit(a, b, town);
        }
        for (int i = 1; i < N + 1; i++)
        {
            road.insert(find(i, town));
        }
        cout << road.size() - 1 << endl;
    }
    return 0;
}