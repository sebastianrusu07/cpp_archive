#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int freq[2050];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        freq[nr]++;
    }

    if (freq[2020]>0)
    {
        cout << "DA";
        return 0;
    }

    if (freq[2]>0 && freq[1010]>0)
    {
        cout << "DA";
        return 0;
    }

    if (freq[4]>0 && freq[505]>0)
    {
        cout << "DA";
        return 0;
    }

    if (freq[2]>1 && freq[505]>0)
    {
        cout << "DA";
        return 0;
    }

    if (freq[5]>0 && freq[404]>0)
    {
        cout << "DA";
        return 0;
    }

    if (freq[5]>0 && freq[202]>0 && freq[2]>0)
    {
        cout << "DA";
        return 0;
    }

    if (freq[5]>0 && freq[101]>0 && freq[2]>1)
    {
        cout << "DA";
        return 0;
    }

    if (freq[5]>0 && freq[4]>0 && freq[101]>0)
    {
        cout << "DA";
        return 0;
    }

    if (freq[10]>0 && freq[202]>0)
    {
        cout << "DA";
        return 0;
    }

    if (freq[20]>0 && freq[101]>0)
    {
        cout << "DA";
        return 0;
    }

    if (freq[10]>0 && freq[101]>0 && freq[2]>0)
    {
        cout << "DA";
        return 0;
    }

    cout << "NU";
    return 0;
}