#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

ifstream cin("burebista.in");
ofstream cout("burebista.out");

int main()
{
    int c,n;
    cin >> c >> n;

    int cnt=0,streak=0,longest=0,culprit=0;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin >> nr;
        if (c==1 && nr==1)
        {
            cnt++;
        }
        if (streak==0)
        {
            culprit=nr;
            streak++;
        }else
        {
            if (nr==culprit)
            {
                streak++;
            }else
            {
                longest=max(streak,longest);
                streak=1;
                culprit=nr;
            }
        }
    }
    longest=max(culprit,longest);
    if (c==2) cout << longest;
    else cout << cnt;
    return 0;
}