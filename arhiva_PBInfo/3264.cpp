#include <cmath>
#include <vector>
#include <climits>
#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("summin_xi.in");
ofstream cout("summin_xi.out");

int main()
{
    int n;
    cin>>n;

    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        int minNum=INT_MAX;
        for(int j=0;j<n;j++)
        {
            minNum=min(minNum,arr[j][i]);
        }
        sum+=minNum;
    }
    cout<<sum;
    return 0;
}