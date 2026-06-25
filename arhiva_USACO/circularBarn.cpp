#include <fstream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <climits>
using namespace std;

ifstream cin("cbarn.in");
ofstream cout("cbarn.out");

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int minDist = INT_MAX;
    for (int i=0;i<n;i++)
    {
        int dist=0;
        for (int j=i+1;j<n;j++)
        {
            dist += (j-i)*a[j];
        }
        for (int j=0;j<i;j++)
        {
            dist += (n-i+j)*a[j];
        }
        minDist = min(minDist, dist);
    }
    cout << minDist << '\n';

    cin.close();
    cout.close();
    return 0;
}