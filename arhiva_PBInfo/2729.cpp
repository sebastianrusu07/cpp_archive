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
#include <cctype>
using namespace std;

#define ll long long

int main()
{
    ll totalRes=0,totalStr=0;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll res,str;
        cin>>res>>str;
        totalRes+=res;
        totalStr+=str;
    }
    ll m;
    cin>>m;
    ll armor,sword,price,cheapskatePrice=-1;
    for(ll i=0;i<m;i++)
    {
        cin >> armor >> sword >> price;
        if (armor>=totalRes && sword>=totalStr)
        {
            if (price<cheapskatePrice || cheapskatePrice==-1)
            {
                cheapskatePrice=price;
            }
        }
    }
    cout<<cheapskatePrice;
    return 0;
}