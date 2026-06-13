#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double sum=0;
    for(int i=1;i<=n;i++)
    {
        double a,l;
        cin >> a >> l;

        double radians = a * M_PI / 180;
        double heightDifference = sin(radians) * l;
        sum+=heightDifference;
    }

    cout << fixed << setprecision(2) << sum;
    return 0;
}