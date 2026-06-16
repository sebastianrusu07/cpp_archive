#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n,p;
    cin >> n >> p;

    vector<int> profitPerDay;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;

        profitPerDay.push_back(nr-p);
    }

    int most=0,sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=profitPerDay[i];
        if (sum < 0) sum = 0;
        if (sum > most) most = sum;
    }
    cout << most;
    return 0;
}