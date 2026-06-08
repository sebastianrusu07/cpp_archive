#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

unsigned long long sumDigits(string s)
{
    unsigned long long sum = 0;
    for (char c : s)
    {
        sum += c - '0';
    }
    return sum;
}

int main()
{
    string s;
    cin>>s;
    cout<<(sumDigits(s)%3==0?"Jebb":"Neibb");
    return 0;
}