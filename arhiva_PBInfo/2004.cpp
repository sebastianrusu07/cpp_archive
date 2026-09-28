#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <unordered_map>
#include <string>
#include <bitset>
#include <fstream>
#include <set>
#include <iomanip>
using namespace std;

ifstream cin("ore.in");
ofstream cout("ore.out");

struct timeShown
{
    int hours,minutes,seconds;
};

void firstTask(timeShown a,timeShown b)
{
    cout << a.hours << ": " << a.minutes << ": " << a.seconds << '\n';
    cout << b.hours << ": " << b.minutes << ": " << b.seconds << '\n';
}

int toSeconds(timeShown t)
{
    return t.hours * 3600 + t.minutes * 60 + t.seconds;
}

void secondTask(timeShown a,timeShown b)
{
    cout << toSeconds(a) << '\n' << toSeconds(b) << '\n';
}

void thirdTask(timeShown a,timeShown b)
{
    cout << (a.hours + b.hours)%24 + (a.minutes + b.minutes)/60 << ": " << (a.minutes + b.minutes)%60 + (a.seconds + b.seconds)/60 << ": " << (a.seconds + b.seconds)%60;
}

int main()
{
    timeShown a,b;
    cin >> a.hours >> a.minutes >> a.seconds >> b.hours >> b.minutes >> b.seconds;

    firstTask(a,b);
    secondTask(a,b);
    thirdTask(a,b);
    return 0;
}