#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
using namespace std;

ifstream cin("unice1.in");
ofstream cout("unice1.out");

int main()
{
    int n;
    cin >> n;

    unordered_map<int,int> map;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        map[nr]++;
    }

    int count=0;
    for (auto pair : map)
    {
        if (pair.second == 1)count++;
    }
    cout << count;
    return 0;
}