#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;

        vector<string> v(n);

        for (int j = 0; j < n; j++)
        {
            cin >> v[j];
        }

        sort(v.begin(), v.end());

        bool one=false;
        for (int j = 0; j < v.size()-1; j++)
        {
            if (v[j+1].substr(0,v[j].size())==v[j])
            {
                cout << "NO\n";
                one=true;
                break;
            }
        }
        if (!one) cout << "YES\n";
    }
    return 0;
}