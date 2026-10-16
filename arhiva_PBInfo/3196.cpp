#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("instabook.in");
ofstream cout("instabook.out");

int onWhatPositionIs[100005];
int nrOnTheIndex[100005];
pair<int,int> bestWorstIdx[100005];

int main()
{
    int n,m;
    cin >> n >> m;

    for (int i=1;i<=n;i++)
    {
        onWhatPositionIs[i] = i;
        nrOnTheIndex[i] = i;
        bestWorstIdx[i].first = i;
        bestWorstIdx[i].second = i;
    }

    for(int i=0;i<m;i++)
    {
        int likedPost;
        cin >> likedPost;

        int idxOfLiked = onWhatPositionIs[likedPost];
        if (idxOfLiked == 1) continue;
        int idxOfBeaten = idxOfLiked-1;
        int beatenPost = nrOnTheIndex[idxOfBeaten];
        bestWorstIdx[beatenPost].second = max(bestWorstIdx[beatenPost].second,idxOfLiked);
        bestWorstIdx[likedPost].first = min(bestWorstIdx[likedPost].first,idxOfBeaten);
        swap(onWhatPositionIs[likedPost], onWhatPositionIs[beatenPost]);
        swap(nrOnTheIndex[idxOfLiked], nrOnTheIndex[idxOfBeaten]);
    }

    for (int i=1;i<=n;i++)
    {
        cout << bestWorstIdx[i].first << " " << bestWorstIdx[i].second << '\n';
    }
    return 0;
}