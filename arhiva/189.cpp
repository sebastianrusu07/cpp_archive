#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

bool isMountain(string nr)
{
    int point=0;
    for (const char &c : nr)
    {
        point = max(point,c - '0');
    }
    if (nr[nr.length() - 1] == point+'0')return false;
    bool ascend = true;
    for (int i = 1; i < nr.length(); i++)
    {
        int prev=nr[i-1]-'0';
        int digit=nr[i]-'0';
        if (ascend)
        {
            if (prev>=digit)return false;
        }else
        {
            if (prev<=digit)return false;
        }
        if (digit==point)ascend=false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        cout << (isMountain(s)?"1":"0")<<endl;
    }
    return 0;
}



