#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        vector<int> a;
        vector<int> b;
        int aSize;
        cin >> aSize;
        for (int j = 0; j < aSize; j++)
        {
            int nr;
            cin >> nr;
            a.push_back(nr);
        }
        int bSize;
        cin >> bSize;
        for (int j = 0; j < bSize; j++)
        {
            int nr;
            cin >> nr;
            b.push_back(nr);
        }

        int targetI=0,ok = 1;
        long long suma=0;
        for (int j = 0; j < a.size(); j++)
        {
            suma+=a[j];
            if (suma>b[targetI])ok = 0;
            if (suma==b[targetI])
            {
                targetI++;
                suma=0;
            }
        }
        if (suma!=0 || targetI != b.size())ok=0;
        cout << ok << endl;
    }
    return 0;
}