#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
#include <cstring>
using namespace std;

ifstream cin("flici.in");
ofstream cout("flici.out");

int main()
{
    int n;
    cin>>n;

    int flics[n],boxes[n];
    for(int i=0;i<n;i++) cin>>flics[i];
    for(int i=0;i<n;i++) cin>>boxes[i];

    sort(flics,flics+n);
    sort(boxes,boxes+n);

    int diffSum=0;
    for(int i=0;i<n;i++)
    {
        diffSum+=abs(flics[i]-boxes[i]);
    }
    cout<<diffSum;
    return 0;
}