#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int freq[101];

int main()
{
    int n,r;
    cin >> r >> n;

    if (r==n)
    {
        cout << "too late";
        return 0;
    }

    for (int i=1; i<=n; i++)
    {
        int nr;
        cin >> nr;
        freq[nr]=1;
    }

    for (int i=1; i<=r; i++)
    {
        if (freq[i]==0)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}