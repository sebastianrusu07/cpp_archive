#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a=0,b=0;
    for (int i = 1; i <= n; i++)
    {
        long long nr;
        cin >> nr;
        if (i<=n/2)
        {
            a+=nr;
        }else
        {
            b+=nr;
        }
    }
    cout << a*b;
    return 0;
}