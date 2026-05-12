#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    double aWorkers,aTime,aHole;
    cin >> aWorkers >> aTime >> aHole;

    double oneWorkerTime = aWorkers * aTime;
    double oneCubicTime = oneWorkerTime / aHole;
    double bWorkers,bHole;
    cin >> bWorkers >> bHole;
    cout << fixed << setprecision(5) << oneCubicTime/bWorkers * bHole;
    return 0;
}