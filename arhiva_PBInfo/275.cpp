#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <set>
using namespace std;

ifstream cin("perechivocale1.in");
ofstream cout("perechivocale1.out");

bool isVowel(char c)
{
    set<char> vowels={'a','e','i','o','u'};
    return vowels.count(tolower(c));
}

int main()
{
    unordered_map<string,int> pairApps;
    string line;
    int maxApp=0;
    while (getline(cin,line) && line!="IAmASentinelValue")
    {
        for (int i=0;i<line.length()-1;i++)
        {
            if (isVowel(line[i]) && isVowel(line[i+1]))
            {
                string pair=line.substr(i,2);
                pairApps[pair]++;
                maxApp=max(maxApp,pairApps[pair]);
            }
        }
    }

    vector<string> toOrder;
    for (auto pair : pairApps)
    {
        if (pair.second == maxApp)
        {
            toOrder.push_back(pair.first);
        }
    }
    sort(toOrder.begin(),toOrder.end());
    for (string pair : toOrder) cout << pair << ' ';
    return 0;
}