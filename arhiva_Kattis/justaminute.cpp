#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    double totalSeconds=0,totalMins=0;
    for(int i=0;i<n;i++)
    {
        double mins,seconds;
        cin>>mins>>seconds;

        totalMins+=mins;
        totalSeconds+=seconds;
    }
    double ratio=totalSeconds/(totalMins*60);

    if (ratio<=1) cout << "measurement error";
    else cout << fixed << setprecision(8) << ratio;
    return 0;
}