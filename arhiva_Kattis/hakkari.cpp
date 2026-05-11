#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    vector<pair<int,int>> v;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            char c;
            cin >> c;
            if (c == '*')
            {
                v.push_back(make_pair(i,j));
            }
        }
    }

    cout << v.size() << '\n';
    for (auto p : v)
    {
        cout << p.first << ' ' << p.second << '\n';
    }
    return 0;
}