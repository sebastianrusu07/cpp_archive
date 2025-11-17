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
    int len;
    cin >> len;
    unordered_map<int,int> map;
    int matrice[len][len];
    for (int i=0;i<len;i++)
    {
        for (int j=0;j<len;j++)
        {
            cin >> matrice[i][j];
            if (matrice[i][j] < 1 || matrice[i][j] > len*len)
            {
                cout << "false";
                return 0;
            }
        }
    }

    int targetSum=0;
    for (int i=0;i<len;i++)
    {
        targetSum+=matrice[0][i];
    }

    for (int i=1;i<len;i++)
    {
        int suma=0;
        for (int j=0;j<len;j++)
        {
            suma+=matrice[i][j];
        }
        if (suma!=targetSum)
        {
            cout << "false";
            return 0;
        }
    }

    for (int i=0;i<len;i++)
    {
        int suma=0;
        for (int j=0;j<len;j++)
        {
            suma+=matrice[j][i];
        }
        if (suma!=targetSum)
        {
            cout << "false";
            return 0;
        }
    }

    int tempSum1=0;
    for (int i=0;i<len;i++)
    {
        tempSum1+=matrice[len-i-1][i];
    }
    if (tempSum1!=targetSum)
    {
        cout << "false";
        return 0;
    }

    int tempSum2=0;
    for (int i=0;i<len;i++)
    {
        tempSum2+=matrice[i][i];
    }
    if (tempSum2!=targetSum)
    {
        cout << "false";
        return 0;
    }
    cout << "true";
    return 0;
}