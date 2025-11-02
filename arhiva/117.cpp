#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

void numar(int n,int a[],int &k)
{
    int maxNr=INT_MIN,minNr=INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxNr=max(maxNr,a[i]);
        minNr=min(minNr,a[i]);
    }
    string concat=to_string(maxNr)+to_string(minNr);
    k=stoi(concat);
}