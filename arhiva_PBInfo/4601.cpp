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
using namespace std;

bool isPP(int nr)
{
    int root = sqrt(nr);
    if (root*root == nr)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    for (int i=1;true;i++)
    {
        if (n%i!=0) continue;
        int duo = n/i;
        if (isPP(duo))
        {
            cout << sqrt(duo) << ' ' << i;
            return 0;
        }
    }
}