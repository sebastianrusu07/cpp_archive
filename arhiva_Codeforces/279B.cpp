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
    int bookCount,time;
    cin >> bookCount >> time;

    int book[100005];
    for(int i=0;i<bookCount;i++)
    {
        cin >> book[i];
    }

    int le=0,ri=0,cost=0,best=0;
    while(le<bookCount)
    {
        while (ri < bookCount && cost + book[ri] <= time)
        {
            cost += book[ri];
            ri++;
        }
        if (le != ri)
        {
            best=max(best,ri-le);
            cost -= book[le];
        }
        le++;
        if (le > ri) ri = le;
    }
    cout << best;
    return 0;
}