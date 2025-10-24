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

bool isPrime(int n)
{
    if (n <= 1)return false;
    if (n == 2)return true;
    if (n % 2 == 0)return false;
    for (int i = 3; i <= sqrt(n); i+=2)
    {
        if (n % i == 0)return false;
    }
    return true;
}

void sub(int a,int &b,int &c)
{
    b=0,c=0;
    bool flag=true;
    for(int i=a-1;flag;i--)
    {
        if(isPrime(i))
        {
            if (b==0)b=i;
            else
            {
                c=i;
                flag = false;
            }
        }
    }
}

