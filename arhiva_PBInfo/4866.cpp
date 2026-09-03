#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
#include <cstring>
using namespace std;

ifstream cin("mex.in");
ofstream cout("mex.out");

bool present[100005];

int main()
{
    int n,k;
    cin>>n>>k;

    int obviousChanges=0; //numbers equal to k
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        if (num==k)
        {
            obviousChanges++;
        }
        present[num]=true;
    }
    int extraChanges=0;
    int doubleWhammies=0; // the amount of ks we can convert to also cover a nonpresent number
    for(int i=1;i<k;i++)
    {
        if (!present[i])
        {
            if (doubleWhammies<obviousChanges)
            {
                doubleWhammies++;
            }else
            {
                extraChanges++;
            }
        }
    }
    cout<<obviousChanges + extraChanges;
    return 0;
}