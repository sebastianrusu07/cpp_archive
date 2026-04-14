#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("multiple.in");
ofstream cout("multiple.out");

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int start,k;
        cin>>start>>k;
        if (k>start)cout << k << endl;
        else cout << start+(k-(start%k)) << endl;
    }
    return 0;
}