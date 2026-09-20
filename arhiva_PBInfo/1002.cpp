#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int digits;
    cin >> digits;

    int completeVolumes = digits / 792;
    digits = digits % 792;

    if (digits==0)
    {
        cout << completeVolumes << " 300";
        return 0;
    }

    int volumes = completeVolumes + 1;
    int pagesMade=0;
    if (digits-9>0)
    {
        pagesMade+=9;
        digits-=9;
    }else
    {
        pagesMade+=digits;
        cout << volumes << ' ' << pagesMade;
        return 0;
    }

    if (digits-180>0)
    {
        pagesMade+=90;
        digits-=180;
    }else
    {
        if (digits%2!=0)
        {
            cout << "IMPOSIBIL";
            return 0;
        }else
        {
            pagesMade+=digits/2;
            cout << volumes << ' ' << pagesMade;
            return 0;
        }
    }

    if (digits%3!=0)
    {
        cout << "IMPOSIBIL";
        return 0;
    }else
    {
        pagesMade+=digits/3;
    }
    cout << volumes << ' ' << pagesMade;
    return 0;
}