#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <string>
#include <bitset>
#include <iostream>
#include <set>
#include <iomanip>
using namespace std;

int main()
{
    long long cityCount,towerCount;
    cin >> cityCount >> towerCount;

    long long city[100005];
    for(long long i=0;i<cityCount;i++)
    {
        cin >> city[i];
    }

    long long tower[100005];
    for(long long i=0;i<towerCount;i++)
    {
        cin >> tower[i];
    }

    long long bestAns=0,pickedTower=0;

    for (long long i=0;i<cityCount;i++)
    {
        long long distToCurrent = abs(tower[pickedTower]-city[i]);

        if (pickedTower!=towerCount-1)
        {
            long long distToNext = abs(tower[pickedTower+1]-city[i]);
            while(pickedTower<=towerCount-2 && distToNext<=distToCurrent)
            {
                pickedTower++;
                distToCurrent = abs(tower[pickedTower]-city[i]);
                if(pickedTower==towerCount-1) break;
                distToNext = abs(tower[pickedTower+1]-city[i]);
            }
            bestAns = max(bestAns,min(distToCurrent,distToNext));
        }else
        {
            bestAns=max(distToCurrent,bestAns);
        }

    }
    cout << bestAns;
    return 0;
}