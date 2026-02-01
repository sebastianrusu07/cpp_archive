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

int main()
{
    long long n;
    cin >> n;

    long long raspuns = 1;
    long long temp = n;

    long long d = 2;
    while(temp>1)
    {
        while (temp%d!=0 && d*d<=temp)
        {
            d++;
        }
        if (d*d>temp)
        {
            d=temp;
        }
        int x = 0;
        while(temp%d==0)
        {
            temp/=d;
            x++;
        }
        raspuns *= 1+x*n;
        raspuns %= 59999;
    }
    cout << raspuns;
    return 0;
}