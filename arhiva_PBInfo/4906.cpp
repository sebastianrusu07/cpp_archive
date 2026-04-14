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

bool isPowerOfTen(int nr)
{
    string number = to_string(nr);
    if (number[0]!='1')return false;
    for (int i=1;i<number.length();i++)
    {
        if (number[i]!='0')return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    int cnt=0;
    for (int i=1;i<=n;i+=1)
    {
        int nr;
        cin>>nr;
        if (nr<=999999 && nr>9 && isPowerOfTen(nr))cnt++;
    }
    cout<<cnt;
    return 0;
}