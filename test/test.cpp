#include <iostream>

using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int x, min;
        cin >> min;
        for (int i = 0; i < n - 1; i++)
        {
            if (cin >> x && x < min)
            {
                min = x;
            }
        }
        cout << min << endl;
    }

    return 0;
}