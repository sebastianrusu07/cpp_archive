#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
#include <list>
using namespace std;

void afisare(int a,int b)
{
    int t=a;
    a=min(a,b);
    b=max(b,t);
    if (a%2!=0)a++;
    if (b%2!=0)b--;
    for(int i=a;i<=b;i+=2)
    {
        cout<<i<<" ";
    }
}
