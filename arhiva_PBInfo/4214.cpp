#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

int sume[85][2];

int sumCif(int nr)
{
    int sum=0;
    while (nr)
    {
        sum += nr%10;
        nr/=10;
    }
    return sum;
}

int DouaNumere(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = sumCif(a[i]);
        if (sume[sum][0]==0 || sume[sum][0]<a[i])
        {
            sume[sum][1]=sume[sum][0];
            sume[sum][0]=a[i];
        }else
        {
            if (sume[sum][1]==0 || sume[sum][1]<a[i])
            {
                sume[sum][1]=a[i];
            }
        }
    }

    int maxSum=-1;
    for (int i = 82; i >= 1; i--)
    {
        if (sume[i][0] == 0 || sume[i][1] == 0) continue;
        if (sume[i][0] + sume[i][1] > maxSum)
        {
            maxSum = sume[i][0] + sume[i][1];
        }
    }
    return maxSum;
}