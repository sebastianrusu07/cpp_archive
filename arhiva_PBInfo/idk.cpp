#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    unsigned long long i;
    cin >> n;

    vector<int> cuburi={1,8,343,1331,1030301,1367631,1003003001};

    for (i=cuburi.size()-1; n<cuburi[i]; i--);

    cout << cuburi[i];
    return 0;
}