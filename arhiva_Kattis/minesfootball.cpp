#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int maxim=0,minim=INT_MAX,sumMax=0,sumMin=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        int games;
        cin>>games;

        int sum=0;
        for(int j=1;j<=games;j++)
        {
            int points;
            cin>>points;

            maxim=max(maxim,points);
            minim=min(minim,points);

            sum+=points;
        }
        sumMax=max(sumMax,sum);
        sumMin=min(sumMin,sum);
    }
    cout << maxim << '\n' << minim << '\n' << sumMax << '\n' << sumMin;
    return 0;
}