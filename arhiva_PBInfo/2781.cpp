#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{
    int x,y,m,n;
    cin >> x >> y >> m >> n;
    int d1 = (y-1)+(x-1)+1;
    int d2=  (n-y)+(x-1)+1;
    int d3 = (n-y)+(m-x)+1;
    int d4 = (y-1)+(m-x)+1;
    cout << max(max(d1,d2),max(d3,d4));
    return 0;
}

