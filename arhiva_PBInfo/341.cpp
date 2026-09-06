#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
#include <cstring>
using namespace std;

ifstream cin("bomboane.in");
ofstream cout("bomboane.out");

int main()
{
    int n;
    cin>>n;

    int boxes[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>boxes[i];
        sum+=boxes[i];
    }
    if (sum%n!=0)
    {
        cout << -1;
        return 0;
    }
    int baseline = sum/n;

    vector<string> moves;
    while (true)
    {
        int biggest=0,smallest=1001;
        int biggestPos,smallestPos;
        for(int i=0;i<n;i++)
        {
            if (boxes[i]>biggest)
            {
                biggest=boxes[i];
                biggestPos=i;
            }
            if (boxes[i]<smallest)
            {
                smallest=boxes[i];
                smallestPos=i;
            }
        }
        if (smallest==biggest)
        {
            break;
        }
        int diff = baseline - smallest;
        boxes[smallestPos]+=diff;
        boxes[biggestPos]-=diff;
        moves.push_back(to_string(biggestPos+1)+' '+to_string(smallestPos+1)+' '+to_string(diff));
    }
    cout << moves.size() << '\n';
    for(int i=0;i<moves.size();i++)
    {
        cout<<moves[i]<<'\n';
    }
    return 0;
}