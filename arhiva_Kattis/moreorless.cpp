#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int a,b;
    while (cin >> a >> b && a!=b)
    {
        cout << (a>b? "More\n" : "Less\n");
    }
    return 0;
}