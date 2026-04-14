#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <fstream>
#include <thread>
using namespace std;

long long NrSecvS(int a[], int n, int S)
{
    int v[1000005];
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        v[i] = v[i-1] + a[i];
    }

    if (v[n]<=S) return 0;

    long long result = 0;
    int st=0, dr=1;

    for (; v[n]-v[st]>S ; st++)
    {
        while (v[dr]-v[st]<=S && dr < n)
        {
            dr++;
        }
        result += n-dr+1;
    }
    return result;
}