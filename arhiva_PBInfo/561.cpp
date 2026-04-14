#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <climits>
#include <unordered_map>
using namespace std;

int main()
{
    int bani,n;
    cin >> bani >> n;
    int minPrice = INT_MAX,index=0;
    for(int i=1;i<=n;i++)
    {
        int price;
        cin >> price;
        if(price < minPrice)
        {
            minPrice = price;
            index = i;
        }
    }
    cout << bani/minPrice << " " << index;
    return 0;
}