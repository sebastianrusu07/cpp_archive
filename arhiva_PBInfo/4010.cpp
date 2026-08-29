#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int childrenLeft,stores;
    cin >> childrenLeft >> stores;

    vector<pair<int,int>> gifts;
    for (int i=0;i<stores;i++)
    {
        int price,cnt;
        cin >> price >> cnt;

        gifts.push_back(make_pair(price,cnt));
    }
    sort(gifts.begin(),gifts.end(), greater<pair<int,int>>());

    int theCheck=0;
    while (childrenLeft>0 && !gifts.empty())
    {
        pair<int,int> currentStore = gifts.back();
        gifts.pop_back();
        int toysToBuy = min(currentStore.second,childrenLeft);
        theCheck += currentStore.first * toysToBuy;
        childrenLeft -= toysToBuy; //for consistency
    }

    if (childrenLeft>0)
    {
        cout << "imposibil";
    }else
    {
        cout << theCheck;
    }
    return 0;
}