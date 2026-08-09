#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

long long tenToThePowerOf(int p)
{
    long long res = 1;
    for (int i = 1; i < p; i++)
    {
        res *= 10;
    }
    return res;
}

long long factorial(int n)
{
    long long res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int nr;
    cin >> nr;

    if (nr==0)
    {
        cout << 0;
        return 0;
    }

    vector<int> digits;
    int sum = 0;
    while (nr)
    {
        int digit = nr % 10;
        digits.push_back(digit);
        sum += digit;
        nr /= 10;
    }

    int appPerPos = factorial(digits.size())/digits.size();
    long long root = stoi(string(digits.size(),'1'));
    cout << root * appPerPos * sum << endl;
    return 0;
}