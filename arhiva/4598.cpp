#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    string t, c;
    cin >> t >> c;

    if (t.size() != c.size())
    {
        cout << "cod incorect";
        return 0;
    }

    string s;
    int st = 0;
    int dr = t.size() - 1;
    for (int i = c.size() - 1; i >= 0; i--)
    {
        if ((c[i] - '0') % 2 == 0)
        {
            s = t[st] + s;
            st++;
        }
        else
        {
            s = t[dr] + s;
            dr--;
        }
    }

    cout << s;
    return 0;
}
