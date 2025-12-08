#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int lastTriangularNrIndex(int n)
{
    int sum=0,cnt=0;
    for(int i=1; sum<n; i++)
    {
        sum+=i;
        cnt++;
    }
    return cnt;
}

int main()
{
    int f;
    cin >> f;

    int nrRand = f/5 + (f%5!=0);
    int full = (f%5==0);
    string flower = lastTriangularNrIndex(nrRand)%2!=0?"micsunele":"panselute";

    cout << nrRand << endl << (full==0?"NU":"DA") << endl << flower;
    return 0;
}