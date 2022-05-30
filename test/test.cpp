#include <iostream>
#include <algorithm>
#include <set>
#define ll long long

using namespace std;

set<Result> qc;

void dfs(int step, int n, Result result, ll visit[], ll num[])
{
    if (step == n - 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (visit[i] == 0)
            {
                result.x[step] = num[i];
                if (!qc.count(result))
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (j == 0)
                        {
                            cout << result.x[j];
                        }
                        else
                        {
                            cout << " " << result.x[j];
                        }
                    }
                    qc.insert(result);
                    cout << endl;
                }
            }
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (visit[i] == 0)
        {
            visit[i] = 1;
            result.x[step] = num[i];
            dfs(step + 1, n, result, visit, num);
            visit[i] = 0;
        }
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        qc.clear();
        ll num[n], visit[n];
        Result result;
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
            visit[i] = 0;
        }
        sort(num, num + n);
        dfs(0, n, result, visit, num);
    }

    return 0;
}