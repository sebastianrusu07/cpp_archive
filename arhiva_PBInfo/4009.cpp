#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,cash;
    cin >> n >> cash;

    vector<int> gifts;
    for (int i=0;i<n;i++)
    {
        int cost;
        cin >> cost;
        gifts.push_back(cost);
    }
    sort(gifts.begin(),gifts.end(),greater<int>());

    int giftsBought = 0;
    while (!gifts.empty() && cash-gifts[gifts.size()-1]>=0)
    {
        cash -= gifts[gifts.size()-1];
        gifts.pop_back();
        giftsBought += 1;
    }

    if (gifts.empty())
    {
        cout << giftsBought << ' ' << 0;
        return 0;
    }
    cout << giftsBought << ' ' << abs(cash-gifts[gifts.size()-1]);
    return 0;
}