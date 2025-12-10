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
    int n, k;
    cin >> n >> k;

    cout << 1;
    for (int i = 2; i < n; i++)cout << 0;
    cout << (k + 8) % 9;

    return 0;

}