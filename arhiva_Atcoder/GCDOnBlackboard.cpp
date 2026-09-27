#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <iostream>
#include <unordered_map>
#include <string>
#include <bitset>
#include <set>
using namespace std;

int cmmdc(int a,int b)
{
    while (b)
    {
        int t = a%b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        arr.push_back(nr);
    }

    vector<int> leftToRight(n),rightToLeft(n);
    leftToRight[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        leftToRight[i]=cmmdc(leftToRight[i-1],arr[i]);
    }

    rightToLeft[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rightToLeft[i]=cmmdc(rightToLeft[i+1],arr[i]);
    }

    vector<int> line(n);
    line[0]=rightToLeft[1];
    line[n-1]=leftToRight[n-2];
    for (int i=1;i<=n-2;i++)
    {
        line[i]=cmmdc(leftToRight[i-1],rightToLeft[i+1]);
    }

    int response=-1;
    for(int i=0;i<n;i++)
    {
        response = max(response,line[i]);
    }
    cout << response;
    return 0;
}

