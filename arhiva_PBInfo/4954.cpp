#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

bool prim(int n)
{
    if (n==1)return false;
    if (n==2)return true;
    if (n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

int oglindit(int n)
{
    string s = to_string(n);
    reverse(s.begin(),s.end());
    return stoi(s);
}

int main()
{
    int a,b;
    cin>>a>>b;

    int cnt=0;
    for(int i=a;i<=b;i++)
    {
        if (prim(i))
        {
            if (prim(oglindit(i)))
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}