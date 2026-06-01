#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int t;

    while (cin >> t && t>0)
    {
        int sum=0,mph,time,previous=0;
        for (int i=0;i<t;i++)
        {
            cin >> mph >> time;
            sum+=mph*(time-previous);
            previous=time;
        }
        cout << sum << " miles\n";
    }
    return 0;
}