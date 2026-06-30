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
    string before,after;
    cin>>before>>after;

    int beforeHour=stoi(before.substr(0,2));
    int beforeMinute=stoi(before.substr(3,2));
    int beforeSecond=stoi(before.substr(6,2));

    int afterHour=stoi(after.substr(0,2));
    int afterMinute=stoi(after.substr(3,2));
    int afterSecond=stoi(after.substr(6,2));

    int secondPasses = (afterHour-beforeHour)*60 + (afterMinute-beforeMinute);
    int minutePasses = (afterHour-beforeHour);
    int hourPasses = (beforeHour<12 && afterHour>=12);

    cout << hourPasses << ' ' << minutePasses << ' ' << secondPasses;

    return 0;
}