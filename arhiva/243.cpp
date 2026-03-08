#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

pair<int,int> closestSmallerTrianghularNr(int nr)
{
    int s=0,pos=0;
    for (int i = 1;s+i<nr; i++)
    {
        s+=i;
        pos++;
    }
    return make_pair(s,pos);
}

int main()
{
    int n;
    cin >> n;

    int start=closestSmallerTrianghularNr(n).first+1;
    int nrInSir=closestSmallerTrianghularNr(n).second+1;

    int rem=n-start;

    cout << nrInSir-rem;


    return 0;
}