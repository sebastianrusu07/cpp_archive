#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
#include <cstring>
using namespace std;

ifstream cin("plopi2.in");
ofstream cout("plopi2.out");

int main()
{
    int n;
    cin>>n;

    int tallest=INT_MAX;
    int cuts=0,lengthCut=0;
    for(int i=1;i<=n;i++)
    {
        int height;
        cin>>height;
        if(height>tallest)
        {
            lengthCut+=height-tallest;
            cuts++;
        }else if (height<tallest)
        {
            tallest=height;
        }
    }
    cout << cuts << " " << lengthCut ;
    return 0;
}