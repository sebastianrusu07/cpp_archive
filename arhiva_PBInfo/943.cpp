#include <iostream>
#include <iomanip>
#include <climits>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <list>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cycleAmount1 = n/10;
    int cycleAmount2 = cycleAmount1%10;
    int cycleFinal = cycleAmount2*3%10;
    int rest = n%10;
    for(int i=1;i<=rest;i++)
    {
        int adaos=i;
        if (i%2!=0 && i!=5)adaos=1;
        if (i%2==0 && i!=0)adaos=6;
        cycleFinal+=adaos;
    }
    cout<<cycleFinal%10;
    return 0;
}