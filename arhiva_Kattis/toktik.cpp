#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> map;
    for (int i = 1; i <= n; i++)
    {
        string name;
        int popularity;
        cin >> name >> popularity;
        map[name]+=popularity;
    }
    string mostPopular;
    int maxPop=-99999;
    for (auto it : map)
    {
        if (it.second > maxPop)
        {
            mostPopular = it.first;
            maxPop = it.second;
        }
    }
    cout << mostPopular;
    return 0;
}