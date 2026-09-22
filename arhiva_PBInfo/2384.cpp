#include <cmath>
#include <vector>
#include <unordered_map>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <string>
#include <set>
using namespace std;

ifstream cin("divigrup.in");
ofstream cout("divigrup.out");

int nrDiv(int nr)
{
    if (nr==1) return 1;

    int divizors=1,twos=0;
    while (nr%2==0)
    {
        twos++;
        nr/=2;
    }
    divizors*=twos+1;

    int i=3;
    for (;i*i<=nr;i+=2)
    {
        if (nr%i==0)
        {
            int cnt=0;
            while (nr%i==0)
            {
                cnt++;
                nr/=i;
            }
            divizors*=cnt+1; // interesting approach, and certainly way faster
        }
    }

    if (nr>1)
        divizors*=2;

    return divizors;
}

int main()
{
    int n;
    cin>>n;

    unordered_map<int,vector<int>> divigroups;
    for (int i=0;i<n;i++)
    {
        int num;
        cin>>num;

        int divizors = nrDiv(num);
        divigroups[divizors].push_back(num);
    }

    vector<pair<int,vector<int>>> sortingVector;
    for (auto it : divigroups)
    {
        sortingVector.push_back(it);
    }
    sort(sortingVector.begin(),sortingVector.end(),greater<pair<int,vector<int>>>());
    cout << sortingVector.size() << '\n';
    for (auto it : sortingVector)
    {
        cout << it.second.size() << ' ';
        sort(it.second.begin(),it.second.end());
        for (int i=0;i<it.second.size();i++)
        {
            cout<<it.second[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}