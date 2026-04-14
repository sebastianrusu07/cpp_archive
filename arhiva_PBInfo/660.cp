#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

bool isValid(int a,int b,int c)
{
    if (a+b<=c || a+c<=b || b+c<=a)return false;
    return true;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    int counter=0;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            for (int k=j+1;k<n;k++)
            {
                if (isValid(v[i],v[j],v[k]))counter++;
            }
        }
    }
    cout<<counter;
    return 0;
}



