#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

long long cmmdc(long long a,long long b)
{
    if (b==0)
    {
        return a;
    }
    return cmmdc(b,a%b);
}

int main()
{
    int n;
    cin>>n;

    vector<long long> numbers(n);
    for (int i=0;i<n;i++)
    {
        cin >> numbers[i];
    }

    if (numbers[0]==0) //r == 0
    {
        cout << 0;
        return 0;
    }
    long long r = cmmdc(numbers[2]/numbers[1],numbers[1]/numbers[0]);
    long long expectedNumber = numbers[0];
    for (int i=0;i<n;i++)
    {
        if (numbers[i] != expectedNumber)
        {
            cout << expectedNumber;
            return 0;
        }
        expectedNumber *= r;
    }
    cout << numbers[0]; // r == 1
    return 0;
}