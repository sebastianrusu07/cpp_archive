#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int itemCnt;
    cin>>itemCnt;

    bool hasKeys=false,hasPhone=false,hasWallet=false;
    for(int i=0;i<itemCnt;i++)
    {
        string item;
        cin>>item;
        if(item=="keys")
        {
            hasKeys=true;
        }else if(item=="phone")
        {
            hasPhone=true;
        }else if(item=="wallet")
        {
            hasWallet=true;
        }
    }
    if (hasKeys && hasPhone && hasWallet)
    {
        cout << "ready";
    }else
    {
        cout << (hasKeys ? "" : "keys\n") << (hasPhone ? "" : "phone\n") << (hasWallet ? "" : "wallet\n");
    }
    return 0;
}