#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;

int main()
{
    int n,maxCapacity;
    cin>>n>>maxCapacity;

    int capacity=maxCapacity,refills=0;
    for(int i=0;i<n;i++)
    {

        string order;
        cin>>order;

        int waterNeeded = order[0]-'0' + (order[order.length()-1]=='L');
        if (capacity < waterNeeded)
        {
            capacity = maxCapacity;
            refills++;
        }
        capacity -= waterNeeded;
    }
    cout << refills << endl;
    return 0;
}