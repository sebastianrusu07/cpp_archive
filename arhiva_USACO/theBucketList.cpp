#include <fstream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

ifstream cin("blist.in");
ofstream cout("blist.out");

int bucketsNeeded[1005];

int main()
{
    int n;
    cin >> n;

    for (int i=0;i<n;i++)
    {
        int from,to,buckets;
        cin >> from >> to >> buckets;

        for (int j=from;j<=to;j++)
        {
            bucketsNeeded[j]+=buckets;
        }
    }

    int most=0;
    for (int i=0;i<=1000;i++)
    {
        most=max(most,bucketsNeeded[i]);
    }

    cout << most;
    cin.close();
    cout.close();
    return 0;
}