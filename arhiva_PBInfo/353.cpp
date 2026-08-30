#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("spectacole.in");
ofstream cout("spectacole.out");

int main()
{
    int n;
    cin>>n;

    vector<pair<int,int>> shows;
    for(int i=0;i<n;i++)
    {
        int start,end;
        cin>>start>>end;
        shows.push_back(make_pair(start,end));
    }

    sort(shows.begin(),shows.end(), [&](const pair<int,int>& a,const pair<int,int>& b)
    {
        return a.second<b.second;
    });

    int time=-1,showsAttended=0;
    for(int i=0;i<shows.size();i++)
    {
        if(shows[i].first>=time)
        {
            time=shows[i].second;
            showsAttended++;
        }
    }
    cout<<showsAttended;
    return 0;
}