#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <iostream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n,m;
    char c;
    cin>>n>>m>>c;

    int arr[n*m],arrLen=m*n;
    for(int i=0;i<arrLen;i++)
    {
        cin >> arr[i];
    }

    if (c=='+')
    {
        sort(arr,arr+arrLen);
    }else
    {
        sort(arr,arr+arrLen,greater<int>());
    }

    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            matrix[i][j]=arr[j*n+i];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}