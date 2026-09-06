#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
#include <cstring>
using namespace std;

ifstream cin("concert.in");
ofstream cout("concert.out");

int convertToSeconds(string time)
{
    string sMinutes = time.substr(0, 2);
    if (sMinutes[1]==':') sMinutes.pop_back();
    int minutes = stoi(sMinutes);
    string sSeconds = time.substr(2);
    if (sSeconds[0]==':') sSeconds.erase(sSeconds.begin());
    int seconds = stoi(sSeconds);
    return minutes*60 + seconds;
}

int main()
{

    int songCount,timeLeft;
    cin>>songCount>>timeLeft;

    pair<int,int> songDurations[songCount];
    for(int i=0;i<songCount;i++)
    {
        string time;
        cin>>time;
        songDurations[i].first = convertToSeconds(time);
        songDurations[i].second = i;
    }
    sort(songDurations,songDurations+songCount);

    int it=0;
    vector<int> songsToPlay;
    while(timeLeft-songDurations[it].first>=0)
    {
        songsToPlay.push_back(songDurations[it].second);
        timeLeft-=songDurations[it].first;
        it++;
    }
    sort(songsToPlay.begin(),songsToPlay.end());
    cout << songsToPlay.size() << '\n';
    for(int i=0;i<songsToPlay.size();i++)
    {
        cout<<songsToPlay[i]+1<<' ';
    }
    return 0;
}