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
    int h,m,add;
    cin >> h >> m >> add;
    m+=add;
    if (m>=60)
    {
        h+=m/60;
        m%=60;
    }
    if (h>=24)
    {
        h%=24;
    }
    cout << h << " " << m;
    return 0;
}



