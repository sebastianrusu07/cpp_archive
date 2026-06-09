#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int ciur[20000005];

int main()
{
    ciur[0] = 1;
    ciur[1] = 1;
    for(int i=2;i*i<=10000000;i++)
    {
        if(ciur[i]==1) continue;
        for(int j=2*i;j<=10000000;j+=i)
        {
            ciur[j]=1;
        }
    }

    int cnt=0;
    for(int i=1;cnt<100;i++)
    {
        if(ciur[i]==0)
        {
            cnt++;
            cout << i << '\n';
        }
    }
    return 0;
}