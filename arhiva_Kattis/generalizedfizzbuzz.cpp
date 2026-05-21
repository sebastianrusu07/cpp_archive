#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

int cmmdc(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return cmmdc(b,a%b);
}

int cmmmc(int a,int b)
{
    return a/cmmdc(a,b)*b;
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    int fizzbuzz=a/cmmmc(b,c);
    int fizz=a/b - fizzbuzz,buzz=a/c - fizzbuzz;
    cout << fizz << ' ' << buzz << ' ' << fizzbuzz;
    return 0;
}