#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int cmmdc(int a,int b)
{
    while (b)
    {
        int rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;

    vector<int> coolGuysOnly,average;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        average.push_back(nr);
    }
    int special = average[n-1];
    for(int i=0;i<n-1;i++)
    {
        int nr=average[i];
        if (cmmdc(special,nr)==1)coolGuysOnly.push_back(nr);
    }
    sort(coolGuysOnly.begin(),coolGuysOnly.end(),greater<int>());
    for(int i=0;i<coolGuysOnly.size();i++)
    {
        cout << coolGuysOnly[i] << " ";
    }
    return 0;
}