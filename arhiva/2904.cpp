#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;


int main()
{
    long long n;
    cin >> n;

    unordered_map<long long,int> map;
    long long next=1;
    for (long long i=1;i<n;i+=next)
    {
        next++;
        map[i]++;
    }

    for (auto it : map)
    {
        long long duo = n-it.first;
        if (map.count(duo))
        {
            cout << duo << " " << it.first;
            return 0;
        }
    }
    cout << "NU";
    return 0;
}