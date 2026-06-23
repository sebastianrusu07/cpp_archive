#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <bitset>
using namespace std;

bitset<1000000005> hasAppeared;

int main()
{
    vector<int> list;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        if (hasAppeared[nr]==false)
        {
            hasAppeared[nr]=true;
            cout << nr << ' ';
        }
    }
    return 0;
}