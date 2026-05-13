#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n,lph;
    cin>>n>>lph;

    int totalLines=lph*5;
    vector<int> problems;
    for (int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        problems.push_back(x);
    }
    sort(problems.begin(),problems.end());
    int sum=0;
    for (int i=0;i<problems.size();i++)
    {
        sum+=problems[i];
        if (sum>totalLines)
        {
            cout << i;
            return 0;
        }
    }
    cout << n;
    return 0;
}