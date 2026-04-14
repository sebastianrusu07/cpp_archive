#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

bool isPalindrome(string nr)
{
    string temp = nr;
    reverse(temp.begin(), temp.end());
    if (temp == nr) return true;
    return false;
}

int main()
{
    int nr;
    unordered_map<int, int> map;
    bool HotlineMiami = false;
    while (cin >> nr && nr != 0)
    {
        if (map.count(nr)!=0)
        {
            map[nr]++;
        }else
        {
            if (isPalindrome(to_string(nr)))
            {
                map[nr] = 1;
                HotlineMiami = true;
            }
        }
    }

    int maxA = 0,maxNr=0;
    for (const auto& p : map)
    {
        if (p.first > maxNr)
        {
            maxA = p.second;
            maxNr = p.first;
        }
    }
    if(!HotlineMiami)
    {
        cout << "NU EXISTA" ;
        return 0;
    }
    cout << maxNr << " " << maxA;
    return 0;
}