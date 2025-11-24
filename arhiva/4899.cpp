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
    int a,b;
    cin >> a >> b;

    int cifA=a/100;
    int cifB=b/100;
    cout << min(cifA,cifB)*10+max(cifB,cifA) << ' ';

    cifA=a/10%10;
    cifB=b/10%10;
    cout << min(cifA,cifB)*10+max(cifB,cifA) << ' ';

    cifA=a%10;
    cifB=b%10;
    cout << min(cifA,cifB)*10+max(cifB,cifA) << ' ';
    return 0;
}