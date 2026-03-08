#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("divk.in");
ofstream cout("divk.out");

int nrDiv(int nr)
{
    int cnt=2,i;
    for (i = 2; i*i < nr; i++)
    {
        if (nr % i == 0)
        {
            cnt+=2;
        }
    }
    cnt += (i*i==nr);
    return cnt;
}

int main()
{
    int n,k;
    cin >> n >> k;

    for (int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        if (nrDiv(nr)>=k)
        {
            cout << nr << " ";
        }
    }
    return 0;
}