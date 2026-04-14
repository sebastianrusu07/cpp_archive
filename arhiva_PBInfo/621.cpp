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
    unordered_map<int,bool> map;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        map[nr]=true;
    }
    int i=1;
    while (true)
    {
        if (!map.count(i))
        {
            cout << i;
            return 0;
        }
        i++;
    }
    return 0;
}
