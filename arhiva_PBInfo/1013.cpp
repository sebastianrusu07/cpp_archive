#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <unordered_map>
#include <string>
#include <bitset>
#include <set>
using namespace std;

bool isABornBeforeB(int yearA,int monthA,int dayA,int yearB,int monthB,int dayB){
    if(yearA > yearB) return false;
    if(yearA < yearB) return true;

    if(monthA > monthB) return false;
    if(monthA < monthB) return true;

    return dayA <= dayB;
}

int main(){
    int n;
    cin >> n;

    int oldestYear=999999999,oldestMonth=999999999,oldestDay=999999999,oldIdx=-1;
    int youngestYear=0,youngestMonth=0,youngestDay=0,youngIdx=-1;

    for (int i=0;i<n;i++)
    {
        int year,month,day;
        cin >> year >> month >> day;
        if (isABornBeforeB(year,month,day,oldestYear,oldestMonth,oldestDay))
        {
            oldestYear = year;
            oldestMonth = month;
            oldestDay = day;
            oldIdx = i+1;
        }
        if (isABornBeforeB(youngestYear,youngestMonth,youngestDay,year,month,day))
        {
            youngestYear = year;
            youngestMonth = month;
            youngestDay = day;
            youngIdx = i+1;
        }
    }
    cout << youngIdx << ' ' << oldIdx;
    return 0;
}
