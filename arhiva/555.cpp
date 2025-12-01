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

bool didOverflow(unsigned long long a,unsigned long long b)
{
    if(a==0 || b==0)return false;
    unsigned long long p = a*b;
    return p/b!=a;
}

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        unsigned long long a,b;
        cin>>a>>b;
        if (didOverflow(a,b))cout << "Overflow!\n";
        else cout << a*b << "\n";
    }
    return 0;
}