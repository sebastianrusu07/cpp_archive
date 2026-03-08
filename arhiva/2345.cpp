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

ifstream cin("magic3.in");
ofstream cout("magic3.out");

int nrDiv(int nr)
{
    long long cnt=0;
    for (long long i=1; i*i<=nr; i++)
    {
        if (nr % i == 0)
        {
            cnt = cnt + (i*i!=nr) + 1;
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin>>n;

    int cnt=0,smallest=999999999;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;

        int nrDivi=nrDiv(nr);
        if (nrDivi<smallest)
        {
            smallest=nrDivi;
            cnt=0;
        }
        if (nrDivi==smallest)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}