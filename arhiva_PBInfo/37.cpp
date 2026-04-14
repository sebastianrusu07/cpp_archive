#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int p(int n,int e)
{
    int power=1;
    for(int i=1;i<=e;i++)
    {
        power*=n;
    }
    return power;
}

#define LIMIT 1000000000
int nz(int n)
{
    int counter=0;;
    for (int i=1;p(5,i)<LIMIT;i++)
    {
        int nr=p(5,i);
        counter+=n/nr;
    }
    return counter;
}
//5^13