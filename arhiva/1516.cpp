#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("bosumflat.in");
ofstream cout("bosumflat.out");

int main()
{
    int n;
    cin>>n;

    vector<int> vP,vI;
    for (int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;

        vI.push_back(nr/10000000*1000 + nr/100000%10*100 + nr/1000%10*10 + nr/10%10);
        vP.push_back(nr/1000000%10*1000 + nr/10000%10*100 + nr/100%10*10 + nr%10);
    }

    for (int i=0;i<n;i++)
    {
        int cnt=0;
        for (int j=0;j<n;j++)
        {
            if (j==i) continue;
            if (vI[i] < vP[j] && vP[i] > vI[j])
            {
                cnt++;
            }
        }
        cout << cnt << ' ';
    }
    return 0;
}
