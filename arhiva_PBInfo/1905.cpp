#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <set>
#include <unordered_set>
#include <queue>
using namespace std;

ifstream cin("snooker1.in");
ofstream cout("snooker1.out");

int main()
{
    int actions;
    cin >> actions;

    long long scores[2]={0,0};
    long long whoseTurn=1,streak=0,longestStreak=0;
    for (int i=0;i<actions;i++)
    {
        int points;
        cin >> points;

        if (points<=0)
        {
            scores[whoseTurn]+=points;
            whoseTurn=(whoseTurn==1 ? 0 : 1);
            if (points==0)longestStreak = max(longestStreak,streak);
            streak=0;
        }else
        {
            scores[whoseTurn]+=points;
            streak++;
        }

    }
    cout << (scores[0]>scores[1] ? 2 : 1) << '\n' << max(longestStreak,streak);
    return 0;
}