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
    long long interval,threshold,evpAmount;
    double waterAmount;
    cin >> waterAmount >> interval >> threshold >> evpAmount;

    long long timePassed=0;
    while (waterAmount>threshold)
    {
        timePassed+=interval;
        waterAmount-=waterAmount/evpAmount;
    }
    cout << timePassed;
    return 0;
}