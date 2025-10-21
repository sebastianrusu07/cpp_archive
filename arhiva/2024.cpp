#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

ifstream cin("divizor112.in");
ofstream cout("divizor112.out");

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    int maxVal = 0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>maxVal) maxVal = v[i];
    }

    vector<int> freq(maxVal+1,0);
    for(int i=0;i<n;i++)
    {
        freq[v[i]]++;
    }

    vector<int> countDiv(maxVal+1,0);
    for(int d=2;d<=maxVal;d++)
    {
        for(int mult=d;mult<=maxVal;mult+=d)
        {
            countDiv[d]+=freq[mult];
        }
    }

    int mare=0,culprit=2;
    for(int d=2;d<=maxVal;d++)
    {
        if(countDiv[d]>mare)
        {
            mare=countDiv[d];
            culprit=d;
        }
    }

    cout<<culprit;
    return 0;
}
