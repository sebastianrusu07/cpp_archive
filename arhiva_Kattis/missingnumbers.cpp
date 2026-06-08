#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int freq[201];

int main()
{
    int n;
    cin >> n;

    int limit=0;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        freq[nr]=1;
        limit = nr;
    }

    bool one=false;
    for (int i = 1; i < limit; i++)
    {
        if (freq[i]==0)
        {
            one = true;
            cout << i << '\n';
        }
    }
    if (!one)
    {
        cout << "good job";
    }
    return 0;
}