#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int canBeDone[200];

int main()
{
    int n,k;
    cin>>n>>k;

    vector<int> partitions;
    partitions.push_back(0);
    for(int i=1;i<=k;i++)
    {
        int pos;
        cin>>pos;
        partitions.push_back(pos);
    }
    partitions.push_back(n);

    vector<int> differences;
    for(int i=1;i<partitions.size();i++)
    {
        differences.push_back(partitions[i]-partitions[i-1]);
    }

    for(int i=0;i<differences.size();i++)
    {
        int width=0;
        for(int j=i;j<differences.size();j++)
        {
            width+=differences[j];
            canBeDone[width]=1;
        }
    }

    for (int i=1;i<=n;i++)
    {
        if(canBeDone[i])
        {
            cout<<i<<" ";
        }
    }
    return 0;
}