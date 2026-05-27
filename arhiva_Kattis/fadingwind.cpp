#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int h,k,v,s;
    cin >> h >> k >> v >> s;

    long long d=0;
    while (h>0)
    {
        v+=s;
        v-=max(1,v/10);
        if (v>=k)
        {
            h++;
        }else
        {
            if (v>0)
            {
                h--;
                if (h==0)
                {
                    v=0;
                }
            }else
            {
                h=0;
                v=0;
            }
        }
        d+=v;
        if (s>0)
        {
            s--;
        }
    }
    cout << d;
    return 0;
}