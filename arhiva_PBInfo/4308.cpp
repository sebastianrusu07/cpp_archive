#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <climits>
#include <iostream>
using namespace std;

int n,m;

int movesFromHere(int x,int y)
{
    if (x==n-1 && y==m-1)
    {
        return 1;
    }
    if (x==n-1 || y==m-1)
    {
        return 1;
    }
    return movesFromHere(x+1,y) + movesFromHere(x,y+1);
}

int main()
{
    cin>>n>>m;
    cout<<movesFromHere(0,0);
    return 0;
}