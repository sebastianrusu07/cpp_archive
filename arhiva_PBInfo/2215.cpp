#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
#include <iostream>
using namespace std;

long long factorial(long long n)
{
    long long res = 1;
    for (long long i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    string seq;
    cin>>seq;
    int evenDigits=0;
    for (char c : seq)
    {
        if ((c-'0')%2==0)
        {
            evenDigits++;
        }
    }
    int totalDigits = seq.length();
    long long ans = evenDigits * factorial(totalDigits-1);
    cout<<ans;
    return 0;
}