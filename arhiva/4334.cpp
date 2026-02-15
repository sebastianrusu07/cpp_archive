#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int exponentSum(int nr)
{
    int sum = 0,d = 2;
    while (nr>1)
    {
        while (nr%d!=0 && d*d<=nr)
        {
            d++;
        }
        if (d*d>nr)
        {
            d=nr;
        }
        while (nr%d==0)
        {
            nr=nr/d;
            sum++;
        }
    }
    return sum;
}

int main()
{
    int k,n;
    cin >> k >> n;

    long long suma = 0;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        if (exponentSum(nr) >= k)
        {
            suma+=nr;
        }
    }
    cout << suma;
    return 0;
}