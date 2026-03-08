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

int levels[1000002];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        if (nr>n) nr=n;
        levels[nr]++;
    }

    long long cnt=0;
    for (long long i = n; i >= 1; i--)
    {
        cnt+=levels[i];
        if (cnt>=i)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}