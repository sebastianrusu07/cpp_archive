#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
using namespace std;

int reduceToFirst(int nr)
{
    while (nr>9)
    {
        nr/=10;
    }
    return nr;
}

int main()
{
    int n;
    cin >> n;
    int minF=99999,maxT=0;
    for (int i=1; i<=n; i++)
    {
        int nr;
        cin >> nr;
        int first=reduceToFirst(nr);
        if (first<minF)
        {
            minF=first;
            maxT=nr;
        }
        if (first==minF)
        {
            maxT=max(maxT,nr);
        }
    }
    cout << maxT;
    return 0;
}