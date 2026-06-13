#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

int scores[6];
int matches[6];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int car,pos;
        cin >> car >> pos;

        scores[car]+=pos;
        matches[car]++;
    }

    int bestCar=1,bestAvg=scores[1]/matches[1];
    for(int i=2;i<=5;i++)
    {
        int avg=scores[i]/matches[i];
        if (avg<bestAvg)
        {
            bestAvg=avg;
            bestCar=i;
        }
    }
    cout << bestCar << '\n' << bestAvg;
    return 0;
}