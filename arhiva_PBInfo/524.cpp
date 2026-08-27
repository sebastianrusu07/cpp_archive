#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct positions
{
    int firstPos=-1,lastPos=-1;
};

int main()
{
    int n;
    cin >> n;

    unordered_map<int,positions> appearances;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;

        if (appearances[nr].firstPos == -1)
        {
            appearances[nr].firstPos = i;
        }
        appearances[nr].lastPos = i;
    }

    int longestSequence = -1, longestStart = -1, longestEnd = -1;
    for (auto nr : appearances)
    {
        if (longestSequence == -1 || (nr.second.lastPos - nr.second.firstPos >= longestSequence && nr.second.firstPos < longestStart))
        {
            longestSequence = nr.second.lastPos - nr.second.firstPos;
            longestStart = nr.second.firstPos;
            longestEnd = nr.second.lastPos;
        }
    }
    cout << longestStart+1 << ' ' << longestEnd+1;
    return 0;
}