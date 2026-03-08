#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

ifstream cin("inimioare.in");
ofstream cout("inimioare.out");

int cmmdc(int a,int b)
{
    while (b)
    {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int cmmmc(int a,int b)
{
    return (a*b)/cmmdc(a,b);
}

int main()
{
    int c;
    cin >> c;
    int b,a,k1,k2;
    cin >> b >> a >> k1 >> k2;

    int rosu = (b-a)/k1 + 1;
    int albastru = (b-a)/k2 + 1;

    int mov=(b-a)/cmmmc(k1,k2) + 1;
    if (c==1)
    {
        cout << mov;
        return 0;
    }
    int total = rosu+albastru-mov;
    if (c==2)
    {
        cout << total;
        return 0;
    }
    int remaining = b-total;
    cout << remaining;
    return 0;
}