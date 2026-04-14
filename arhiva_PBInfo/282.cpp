#include <algorithm>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <climits>
#include <unordered_map>
using namespace std;

ifstream cin("pozmax.in");
ofstream cout("pozmax.out");

int main()
{
    int n;
    cin >> n;
    vector<double> v(n);
    double mare=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        double nr;
        cin >> nr;
        mare=max(mare,nr);
        v[i]=nr;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i]==mare)
        {
            cout << i+1 << " ";
            break;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (v[i]==mare)
        {
            cout << i+1;

            cin.close();
            cout.close();

            return 0;
        }
    }
}