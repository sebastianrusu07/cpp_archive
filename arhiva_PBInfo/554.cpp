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
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> types;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        types.push_back(t);
    }
    int m;
    cin >> m;

    int maxSum=0,index=0;
    for (int i = 0; i < m; i++)
    {
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            int nr;
            cin >> nr;
            sum+=types[j]*nr;
        }
        if (maxSum<sum)
        {
            maxSum=sum;
            index=i;
        }
    }
    cout << index+1;
    return 0;
}