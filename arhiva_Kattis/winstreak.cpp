#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

int main()
{
    int matches;
    cin >> matches;

    int streak=0,longestStreak=0;
    for (int i = 0; i < matches; i++)
    {
        int allyScore,enemyScore;
        cin >> allyScore >> enemyScore;

        if (allyScore > enemyScore)
        {
            streak++;
        }else
        {
            longestStreak=max(streak,longestStreak);
            streak=0;
        }
    }
    longestStreak=max(streak,longestStreak);
    cout << longestStreak;
    return 0;
}