#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int n,m;
    while (cin >> n >> m && n>0 && m>0)
    {
        unordered_set<int> s;
        for (int i=0;i<n;i++)
        {
            int cd;
            cin >> cd;
            s.insert(cd);
        }
        int cnt=0;
        for (int i=0;i<m;i++)
        {
            int cd;
            cin >> cd;
            if (s.count(cd))
            {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}