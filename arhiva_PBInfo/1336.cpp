#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <iostream>
#include <thread>
#include <cctype>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += (n*(n+1)/2 - i*(i-1)/2) + i*(n-i+1);
    }
    cout << sum << endl;
    return 0;
}