#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int factori(int nr)
{
    int cnt=0;
    for (int i=2;i*i<=nr;i++)
    {
        if (nr%i==0)
        {
            cnt++;
            while(nr%i==0)
            {
                nr/=i;
            }
        }
    }
    if (nr>1)cnt++;
    return cnt;
}

int main()
{
    int nr,maxFactori=0,culprit=0;
    while (cin >> nr && nr!=3363)
    {
        int factors=factori(nr);
        if (factors>maxFactori)
        {
            culprit=nr;
            maxFactori=factors;
        }else
        {
            if (factors==maxFactori)culprit=max(culprit,nr);
        }
    }
    cout << culprit << ' ' << maxFactori << endl;
    return 0;
}