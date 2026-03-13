#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <thread>
using namespace std;

ifstream cin("prime.in");
ofstream cout("prime.out");

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

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin>>nr;
        if(prim(nr))
        {
            cout<<nr<<" ";
        }
    }
    return 0;
}