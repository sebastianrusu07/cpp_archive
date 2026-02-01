#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool isOk(int nr)
{
    if (nr<2) return false;
    int d=2;
    while ( nr%d!=0 && d*d<=nr)
    {
        d++;
    }
    if (d*d>nr) return true;
    while (nr%d==0)
    {
        nr/=d;
    }
    return nr==1;
}

int main()
{
    int n;
    cin>>n;

    int minNr=INT_MAX;
    bool gasit=false;
    for (int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        if (isOk(nr))
        {
            minNr=min(minNr,nr);
            gasit=true;
        }
    }
    if(gasit)
    {
        cout<<minNr;
    }else
    {
        cout<<"NU EXISTA";
    }
    return 0;
}