#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <unordered_map>
#include <list>
using namespace std;

int main()
{
    string n;
    unordered_map<int,int> litere;
    cin >> n;
    for(int i=0;i<n.length();i++)
    {
        litere[int(n[i])]++;
    }

    string target;
    cin >> target;
    for(int i=0;i<target.length();i++)
    {
        litere[int(target[i])]--;
        if(litere[int(target[i])]<0)
        {
            cout << "0";
            return 0;
        }
    }
    for (auto it:litere)
    {
        if(it.second>=1)
        {
            cout << "0";
            return 0;
        }
    }
    cout << "1";
    return 0;
}