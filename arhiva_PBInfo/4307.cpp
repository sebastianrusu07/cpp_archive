#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <climits>
#include <iostream>
using namespace std;

unsigned long long dinti(unsigned long long n)
{
    if (n==1)
    {
        return 1;
    }
    return 2*dinti(n-1) + 1;
}

int main()
{
    unsigned long long n;
    cin>>n;
    cout << dinti(n);
    return 0;
}