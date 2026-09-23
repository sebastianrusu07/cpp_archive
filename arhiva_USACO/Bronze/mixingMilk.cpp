#include <fstream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

ifstream cin("mixmilk.in");
ofstream cout("mixmilk.out");

int main()
{
    long long maxCap[4];
    long long cap[4];

    for (long long i=1;i<=3;i++)
    {
        cin >> maxCap[i] >> cap[i];
    }

    for (long long i=1;i<=33;i++)
    {
        if (cap[2]+cap[1]<=maxCap[2])
        {
            cap[2] += cap[1];
            cap[1] = 0;
        }else
        {
            cap[1] = cap[2] + cap[1] - maxCap[2];
            cap[2] = maxCap[2];
        }

        if (cap[3]+cap[2]<=maxCap[3])
        {
            cap[3] += cap[2];
            cap[2] = 0;
        }else
        {
            cap[2] = cap[3] + cap[2] - maxCap[3];
            cap[3] = maxCap[3];
        }

        if (cap[1]+cap[3]<=maxCap[1])
        {
            cap[1] += cap[3];
            cap[3] = 0;
        }else
        {
            cap[3] = cap[1] + cap[3] - maxCap[1];
            cap[1] = maxCap[1];
        }
    }

    if (cap[2]+cap[1]<=maxCap[2])
    {
        cap[2] += cap[1];
        cap[1] = 0;
    }else
    {
        cap[1] = cap[2] + cap[1] - maxCap[2];
        cap[2] = maxCap[2];
    }

    for (long long i=1;i<=3;i++)
    {
        cout << cap[i] << endl;
    }

    cin.close();
    cout.close();
    return 0;
}