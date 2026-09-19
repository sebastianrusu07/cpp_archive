#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <set>
using namespace std;

long long oglindire(long long n)
{
    long long oglindit=0;
    while (n)
    {
        oglindit = oglindit * 10 + n%10;
        n/=10;
    }
    return oglindit;
}

int main()
{
    long long num;
    cin >> num;
    num=num*10+1;
    num = oglindire(num);

    while (num>=10)
    {
        long long c = num%10;
        cout << c << c;
        num/=10;
    }
    return 0;
}