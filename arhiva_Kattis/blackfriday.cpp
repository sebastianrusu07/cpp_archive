#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <cmath>
using namespace std;

int lastPos[7];

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
        lastPos[nr] = i;
    }

    for(int i=6;i>=0;i--)
    {
        if(map[i]!=1) continue;
        cout << lastPos[i]+1;
        return 0;
    }
    cout << "none";
    return 0;
}