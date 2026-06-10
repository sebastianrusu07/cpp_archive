#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin>>n;

    unordered_map<string,pair<int,int>> scoreboard;
    for(int i=0;i<n;i++)
    {
        string name;
        cin>>name;
        scoreboard[name]={i+1,0};
    }

    for(int i=0;i<n;i++)
    {
        string name;
        cin>>name;
        scoreboard[name].second = i+1;
    }

    string winner;
    int winnerScore=0,winnerPos=0;
    for(auto it:scoreboard)
    {
        int score = it.second.first-it.second.second;
        if (score>winnerScore || (score==winnerScore && winnerPos > it.second.second))
        {
            winnerScore=score;
            winner=it.first;
            winnerPos=it.second.second;
        }
    }
    if (winnerScore==0)
    {
        cout << "suspicious";
        return 0;
    }
    cout<<winner;
    return 0;
}