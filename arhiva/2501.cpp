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
    int n;
    cin >> n;
    long long termeni = (n-1)/2+1;
    long long suma = ((n+1*1LL)*termeni) / 2LL;
    cout << suma;
    return 0;
}



