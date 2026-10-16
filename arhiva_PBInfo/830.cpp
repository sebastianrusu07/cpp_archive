#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<int> arr;
vector<int> observer(10005);

void generare(int a,int n,int x,int y)
{
    if (a>n)
    {
        return;
    }
    observer[a]=1;
    arr.push_back(a);
    if (observer[a+x]==0) generare(a+x,n,x,y);
    if (observer[a+y]==0) generare(a+y,n,x,y);
}


int main()
{
    int a,n,x,y;
    cin>>n>>a>>x>>y;
    generare(a,n,x,y);
    sort(arr.begin(),arr.end());
    set<int> s;
    for (int nr : arr)
    {
        s.insert(nr);
    }
    for (int nr : s)
    {
        cout<<nr<<" ";
    }
    return 0;
}