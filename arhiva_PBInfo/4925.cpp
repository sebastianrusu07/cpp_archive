#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int len=n*(n-1)/2,nrs[len];
    for(int i=0;i<len;i++)cin >> nrs[i];

    int matrix[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrix[i][j]=0;
        }
    }

    //top rihgt
    int cnt=0;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            matrix[i][j]=nrs[cnt];
            cnt++;
        }
    }

    //bottom left
    cnt=0;
    for (int j=0;j<n;j++)
    {
        for (int i=j+1;i<n;i++)
        {
            matrix[i][j]=nrs[cnt];
            cnt++;
        }
    }

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}