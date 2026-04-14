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
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int suma1 = b/3 - (a-1)/3;
    int suma2 = y/3 - (x-1)/3;
    cout << suma1+suma2;
    return 0;
}



