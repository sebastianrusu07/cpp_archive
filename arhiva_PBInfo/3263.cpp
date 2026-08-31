#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("summax_xi.in");
ofstream cout("summax_xi.out");

int main()
{
    int n;
    cin>>n;

    int sum=0;
    for(int i=0;i<n;i++)
    {
        int maxNum=INT_MIN;
        for(int j=0;j<n;j++)
        {
            int num;
            cin>>num;
            maxNum=max(maxNum,num);
        }
        sum+=maxNum;
    }
    cout<<sum;
    return 0;
}