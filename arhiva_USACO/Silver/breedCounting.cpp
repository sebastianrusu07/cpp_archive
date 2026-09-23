#include <cmath>
#include <vector>
#include <stack>
#include <climits>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <string>
#include <bitset>
#include <fstream>
#include <set>
#include <iomanip>
using namespace std;

ifstream cin("bcount.in");
ofstream cout("bcount.out");

int main()
{
    int n,q;
    cin>>n>>q;

    int holstein[100005]={0},guernsey[100005]={0},jersey[100005]={0};
    for(int i=1;i<=n;i++)
    {
        int type;
        cin>>type;

        holstein[i]=holstein[i-1]+(type==1);
        guernsey[i]=guernsey[i-1]+(type==2);
        jersey[i]=jersey[i-1]+(type==3);
    }

    for(int i=1;i<=q;i++)
    {
        int start,end;
        cin>>start>>end;

        cout << holstein[end]-holstein[start-1] << ' ' << guernsey[end]-guernsey[start-1] << ' ' << jersey[end]-jersey[start-1] << '\n';
    }
    return 0;
}