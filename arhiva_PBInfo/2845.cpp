#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <set>
#include <unordered_set>
#include <queue>
using namespace std;

int startX, startY,n,m;
int calculateBurn(int x,int y)
{
    return abs(startX-x)+abs(startY-y);
}

int main()
{
    cin>>startX>>startY>>n>>m;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=m;j++)
        {
            cout << calculateBurn(i,j)+1 << ' ';
        }
        cout << '\n';
    }
    return 0;
}