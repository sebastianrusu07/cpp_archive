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

ifstream cin("planta.in");
ofstream cout("planta.out");

int main()
{
    long long d,a,b,n;
    cin>>d>>a>>b>>n;

    long long growDays = (n+1)/2;
    long long shrinkDays = growDays-(n%2!=0);

    cout<<d+growDays*a-shrinkDays*b;
    return 0;
}