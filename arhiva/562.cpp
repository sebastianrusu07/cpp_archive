#include <iostream>
#include <iomanip>
#include <climits>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <list>
using namespace std;

int main()
{
    int n;
    unordered_map<int,int> schedule;
    cin>>n;
    int begin,end;
    cin>>begin>>end;
    int time = end-begin+1;
    for(int i=1;i<=n;i++)
    {
        int start,finish;
        cin>>start>>finish;
        for (int j=start;j<finish;j++)
        {
            if (schedule[j]!=1)
            {
                time--;
                schedule[j]=1;
            }
        }
    }
    cout<<time;
    return 0;
}