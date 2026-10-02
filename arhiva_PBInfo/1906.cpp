#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <string>
#include <bitset>
#include <set>
using namespace std;

bitset<700005> appears;

ifstream fin("memory007.in");
ofstream fout("memory007.out");

int main()
{
    ios_base::sync_with_stdio(false);
    fin.tie(nullptr);

    int n,m,rangeBegin,rangeEnd;
    fin>>n>>m>>rangeBegin>>rangeEnd;

    int size=rangeEnd-rangeBegin;

    for (int i=0;i<n;i++)
    {
        int num;
        fin>>num;
        appears[num-rangeBegin]=true;
    }

    int numbersPassed=0,it=0;
    long long sum=0;
    for (int i=0;i<m;i++)
    {
        int nextIndex;
        fin>>nextIndex;
        while (numbersPassed<nextIndex && it <= size)
        {
            if (appears[it])
            {
                numbersPassed++;
            }
            it++;
        }
        sum += (long long)(it-1 + rangeBegin);
    }
    fout << sum;
    return 0;
}