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

ifstream cin("sumaxl.in");
ofstream cout("sumaxl.out");

int main()
{
    int n;
    cin>>n;
    string big="";
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        big += c;
    }
    string small;
    cin>>small;

    int l = max(small.length(),big.length());
    while (small.size()<l)small="0" + small;
    while (big.size()<l)big="0" + big;

    string r = "";
    int t = 0;
    for(int i=l-1;i>=0;i--)
    {
        int c = small[i] - '0' + big[i] - '0' + t;
        t = c/10;
        c = c%10;
        r = to_string(c) + r;
    }

    if (t>0)r = to_string(t) + r;
    cout<<r;

    return 0;
}