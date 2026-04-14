#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int amtNeeded[n];
    for (int i = 0; i < n; i++)
    {
        cin >> amtNeeded[i];
    }

    int stores,minSum=-1;
    cin >> stores;
    for (int i = 0; i < stores; i++)
    {
        bool disqualified=false;
        long long sum=0;
        for (int j = 0; j < n; j++)
        {
            long long nr;
            cin >> nr;
            if (nr==-1)
            {
                disqualified=true;
            }
            sum+=nr*amtNeeded[j];
        }
        if (!disqualified)
        {
            if (sum<minSum || minSum==-1)
            {
                minSum = sum;
            }
        }

    }
    cout << minSum;
    return 0;
}