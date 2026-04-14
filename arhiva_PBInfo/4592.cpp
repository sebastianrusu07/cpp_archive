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

ifstream cin("fotbal.in");
ofstream cout("fotbal.out");

int main()
{
    int n;
    cin>>n;
    int leastLosses=9999999,highestScore=0;
    for(int i=1;i<=n;i++)
    {
        int W,L,D;
        cin>>W>>L>>D;
        if (L<leastLosses && L>0)
        {
            leastLosses=L;
        }
        highestScore=max(highestScore,D*1+W*3);
    }
    if (n%2==0)
    {
        cout<<highestScore;
    }else
    {
        cout<<leastLosses;
    }
    return 0;
}