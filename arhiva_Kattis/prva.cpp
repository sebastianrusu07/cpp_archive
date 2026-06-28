#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;

    string grid[n];
    for(int i=0;i<n;i++)
    {
        cin >> grid[i];
    }

    vector<string> goodWords;
    for(int i=0;i<n;i++)
    {
        string construct;
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='#')
            {
                if(construct.size()>=2)
                    goodWords.push_back(construct);
                construct.clear();
            }else
            {
                construct+=grid[i][j];
            }
        }
        if(construct.size()>=2)
            goodWords.push_back(construct);
    }

    for(int i=0;i<m;i++)
    {
        string construct;
        for(int j=0;j<n;j++)
        {
            if(grid[j][i]=='#')
            {
                if(construct.size()>=2)
                    goodWords.push_back(construct);
                construct.clear();
            }else
            {
                construct+=grid[j][i];
            }
        }
        if(construct.size()>=2)
            goodWords.push_back(construct);
    }
    sort(goodWords.begin(),goodWords.end());
    cout << goodWords[0] << endl;
    return 0;
}