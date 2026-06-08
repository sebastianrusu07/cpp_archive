#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        double inV,angleInDegrees,x,h1,h2;
        cin >> inV >> angleInDegrees >> x >> h1 >> h2;

        double angle = angleInDegrees * M_PI / 180.0;
        double time = x / (inV * cos(angle));
        double loc = inV * time * sin(angle) - (0.5 * 9.81 * time * time);

        if (loc-1>=h1 && loc+1<=h2)
        {
            cout << "Safe\n";
        }else
        {
            cout << "Not safe\n";
        }
    }
    return 0;
}