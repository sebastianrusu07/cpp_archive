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

ifstream cin("conturi.in");
ofstream cout("conturi.out");

#define banca(n) n/100000
#define gen(n) n/10000%10
#define sum(n) n%10000

int main()
{
    int n,x;
    cin>>n>>x;

    int maxMoney=0;
    for(int i=0;i<n;i++)
    {
        int code;
        cin >> code;

        if (banca(code)==x && gen(code)==1)maxMoney=max(maxMoney,sum(code));
    }
    cout<<maxMoney;
    return 0;
}