#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("secvcresc.in");
ofstream cout("secvcresc.out");

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        v.push_back(nr);
    }

    int maxL = 1, l = 1, st = 0, ST = 0, DR = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i - 1] < v[i])
        {
            l++;
            if (l == 2) st = i - 1;
        }
        else
        {
            if (l > maxL)
            {
                maxL = l;
                ST = st;
                DR = i - 1;
            }
            l = 1;
        }
    }

    if (l > maxL)
    {
        maxL = l;
        ST = st;
        DR = v.size() - 1;
    }

    cout << ST + 1 << " " << DR + 1;
    return 0;
}
