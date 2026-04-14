#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        map[nr]++;
    }
    bool freebie = false;
    if (n%2!=0)freebie = true;
    for (const auto &p : map)
    {
        if (p.second%2!=0 && !freebie)
        {
            cout << "NU";
            return 0;
        }
        if (p.second%2!=0 && freebie)
        {
            freebie = false;
        }
    }
    cout << "DA";
    return 0;
}