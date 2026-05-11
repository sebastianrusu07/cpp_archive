#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double life=0;
    for (int i = 1; i <= n; i++)
    {
        double quality,years;
        cin >> quality >> years;
        life += quality*years;
    }
    cout << fixed << setprecision(3) << life;
    return 0;
}

