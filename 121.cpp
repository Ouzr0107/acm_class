#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    set<int> list;
    set<int>::iterator it;
    list.insert(1);
    for (it = list.begin(); it != list.end(); ++it)
    {
        if (list.count(859963392))
        {
            break;
        }
        list.insert(*it * 2);
        list.insert(*it * 3);
        list.insert(*it * 5);
    }
    while (cin >> n && n != -1)
    {
        it = list.begin();
        for (int i = 0; i < n - 1; ++i)
        {
            ++it;
        }
        string suffix;
        if (n % 10 == 1 && (n / 10) % 10 != 1)
        {
            suffix = "st";
        }
        else if (n % 10 == 2 && (n / 10) % 10 != 1)
        {
            suffix = "nd";
        }
        else if (n % 10 == 3 && (n / 10) % 10 != 1)
        {
            suffix = "rd";
        }
        else
        {
            suffix = "th";
        }
        cout << "The " << n << suffix << " ugly number is " << *it << "." << endl;
    }
    return 0;
}