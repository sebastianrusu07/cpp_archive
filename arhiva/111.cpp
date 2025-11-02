#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int nrFactori(int nr)
{
    int counter = 0;
    for (int i=2;i*i<=nr;i++)
    {
        if (nr % i == 0)
        {
            counter++;
            while(nr % i == 0)nr/=i;
        }
    }
    if (nr > 1)counter++;
    return counter;
}

int main()
{
    int n;
    cin >> n;

    int maxF=0,culprit=0;;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        if (nrFactori(nr) >= maxF)
        {
            if (nrFactori(nr)==maxF)culprit=min(nr,culprit);
            else
            {
                culprit=nr;
                maxF=nrFactori(nr);
            }
        }
    }
    cout << culprit;
    return 0;
}