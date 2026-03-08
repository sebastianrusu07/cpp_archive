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
#include <iostream>
#include <thread>
using namespace std;

int main() {
    int n;

    cin>>n;
    vector<int> shopList;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        shopList.push_back(nr);
    }

    int shops;
    cin>>shops;

    int products[shops][n];
    for(int i=0;i<shops;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>products[i][j];
        }
    }

    int amount=0;
    for(int i=0;i<n;i++)
    {
        long long minimum=9999999999;
        for(int j=0;j<shops;j++)
        {
            if(products[j][i]<minimum && products[j][i]!=-1)
            {
                minimum = products[j][i];
            }
        }
        amount += minimum*shopList[i];
    }
    cout<<amount;
    return 0;
}