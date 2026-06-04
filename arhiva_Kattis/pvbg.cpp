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

    int mini=999999999;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        mini=min(mini,nr);
    }
    cout << mini+1;
    return 0;
}