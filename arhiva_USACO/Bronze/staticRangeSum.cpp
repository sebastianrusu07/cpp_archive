#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <string>
#include <bitset>
#include <fstream>
#include <set>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;

    long long prefixSum[n];
    cin >> prefixSum[0];
    for(int i=1;i<n;i++)
    {
        long long num;
        cin>>num;
        prefixSum[i]=prefixSum[i-1]+num;
    }

    for (int i=0;i<q;i++)
    {
        int toDelete,total;
        cin>>toDelete>>total;
        toDelete--;
        total--;
        if (toDelete==-1)
        {
            cout << prefixSum[total] << '\n';
        }else
        {
            cout << prefixSum[total] - prefixSum[toDelete] << '\n';
        }
    }
    return 0;
}