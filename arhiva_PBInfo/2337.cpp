#include <cmath>
#include <algorithm>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

ifstream cin("coada2.in");
ofstream cout("coada2.out");

int main()
{
    long long x,y,z;
    cin >> x >> y >> z;
    if (y<x+1 || z<x+1)
    {
        cout << "-1";
        return 0;
    }
    long long fA=y-(x+1);
    long long sM=z-(x+1);
    long long total = y+1+sM;
    cout << total;

    cin.close();
    cout.close();

    return 0;
}



