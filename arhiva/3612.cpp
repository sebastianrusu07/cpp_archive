#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int sumDiv(int nr)
{
    int sum=0;
    for (int i = 1; i*i <= nr; i++)
    {
        if (nr % i == 0)
        {
            sum += i;
            if (i*i != nr)
            {
                sum += nr/i;
            }
        }
    }
    return sum;
}

int kpn(int a,int b,int k)
{
    int cnt=0,nr=-1;
    for (int i = a; i <= b && cnt<k; i++)
    {
        int sum = sumDiv(i);
        if (sum%2 == i%2)
        {
            cnt++;
            nr = i;
        }
    }
    if (cnt<k)return -1;
    return nr;
}