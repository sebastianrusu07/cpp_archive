#include <cmath>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int giftsLeftToGet,storeCount;
    cin >> giftsLeftToGet >> storeCount;

    int stores[101];
    for (int i=0;i<storeCount;i++)
    {
        cin >> stores[i];
    }

    sort(stores,stores+storeCount,greater<int>());

    int i=0;
    for (;giftsLeftToGet>0 && i<storeCount;i++)
    {
        giftsLeftToGet-=stores[i];
    }

    cout << (giftsLeftToGet>0?"imposibil":to_string(i)); //to_string to enable ternary cout
    return 0;
}