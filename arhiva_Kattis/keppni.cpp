#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    unordered_map<int,int> app;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        app[nr]++;
    }

    int sum=0;
    for (auto it:app)
    {
        sum+=min(it.second,k);
    }
    cout << sum;
    return 0;
}