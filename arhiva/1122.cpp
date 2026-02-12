#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("babilon.in");
ofstream cout("babilon.out");

int main()
{
    int c,n;
    cin >> c >> n;
    if (c==1)
    {
        int maxStreak=0,streak=0,d;
        for(int i=1;i<=n;i++)
        {
            cin >> d;
            if (d==1)
            {
                streak++;
            }else
            {
                maxStreak=max(maxStreak,streak);
                streak = 0;
            }
        }
        maxStreak=max(maxStreak,streak);
        cout << maxStreak;
        return 0;
    }else
    {
        long long a,b,z=0;
        cin >> a;
        if(a==1)z=1;
        else if(a==2)z=10;
        else z=0;
        for(int i=2;i<=n;i++)
        {
            cin>>b;
            if (b>a) z=z*60;
            if(b==1)z++;
            else if(b==2)z+=10;
            if (b!=3)   a=b;
        }
        cout << z;
    }
    return 0;
}
