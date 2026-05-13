#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double finArea=0;
    for (int i=0;i<n;i++)
    {
        double angle,r1,r2;
        cin >> angle >> r1 >> r2;

        finArea+=(r2-r1)*(r2+r1)*M_PI*angle/360;
    }
    cout << fixed << setprecision(4) << finArea;
    return 0;
}