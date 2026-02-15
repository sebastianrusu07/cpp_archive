#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("maxprimeintreele.in");
ofstream cout("maxprimeintreele.out");

int euler(int nr)
{
    int response = nr,d=2;
    while (nr>1)
    {
        while (nr%d!=0 && d*d<=nr)
        {
            d++;
        }
        if (d*d>nr)
        {
            d=nr;
        }
        if (nr%d==0)
        {
            response=response/d * (d-1);
            while (nr%d==0)
            {
                nr=nr/d;
            }
        }
    }
    return response;
}

int main()
{
    int n,bestNumberPhi,bestNumber;
    cin >> bestNumber;
    bestNumberPhi = euler(bestNumber);
    while (cin >> n)
    {
        int phi = euler(n);
        if (1LL*n*bestNumberPhi > 1LL*bestNumber*phi)
        {
            bestNumber = n;
            bestNumberPhi = phi;
        }
    }
    cout << bestNumber;
    return 0;
}