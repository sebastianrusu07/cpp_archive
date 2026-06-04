#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    double mph,distNeeded,time;
    cin>>mph>>distNeeded>>time;

    double fph = mph*5280;
    double fps = fph/3600;

    double dist = fps*time;
    cout << (dist>=distNeeded?"MADE IT":"FAILED TEST");
    return 0;
}