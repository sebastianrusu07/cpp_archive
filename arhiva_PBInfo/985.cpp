#include <fstream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

ifstream cin("cifre11.in");
ofstream cout("cifre11.out");

int digitApps[10];

int digitSum(int a)
{
    int sum=0;
    while (a>0)
    {
        sum+=a%10;
        a/=10;
    }
    return sum;
}

int maxConsecutiveDigits(int a)
{
    string sorted = to_string(a);
    sort(sorted.begin(), sorted.end());

    int streak=1,maxStreak=1;
    for (int i=1; i<sorted.length(); i++)
    {
        if (sorted[i-1]==sorted[i])
        {
            continue;
        }
        if (sorted[i]-1 == sorted[i-1])
        {
            streak++;
        }else
        {
            maxStreak=max(maxStreak,streak);
            streak=1;
        }
    }
    return max(maxStreak,streak);
}

void digitCount(int a)
{
    bool appeared[10]={false};
    while (a>0)
    {
        appeared[a%10]=true;
        a/=10;
    }

    for (int i=0;i<10;i++)
    {
        digitApps[i]+=appeared[i];
    }
}

int main()
{
    int n;
    cin >> n;

    int biggestNumber=0,smallestSum=INT_MAX;
    int smallestNumber=INT_MAX,maxCons=0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;

        int sum = digitSum(nr);
        if (sum<smallestSum || (sum==smallestSum && nr>biggestNumber))
        {
            biggestNumber=nr;
            smallestSum=sum;
        }

        int cons = maxConsecutiveDigits(nr);
        if (cons>maxCons || (cons==maxCons && nr<smallestNumber))
        {
            smallestNumber=nr;
            maxCons=cons;
        }

        digitCount(nr);
    }

    int mostApps=0;
    for (int i=0;i<10;i++)
    {
        if (digitApps[i]>mostApps)
        {
            mostApps=digitApps[i];
        }
    }

    cout << biggestNumber << '\n' << smallestNumber << '\n';
    for (int i=0;i<10;i++)
    {
        if (digitApps[i]==mostApps)
        {
            cout << i << ' ';
        }
    }
    return 0;
}