#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m=n,matrice[n][m];
    vector<int> sume(4);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int nr;
            cin >> nr;
            if (i+j < n-1 &&  j>i)sume[0]+=nr;
            if (i+j < n-1 &&  j<i)sume[1]+=nr;
            if (i+j > n-1 &&  j>i)sume[2]+=nr;
            if (i+j > m-1 &&  j<i)sume[3]+=nr;
        }
    }
    sort(sume.begin(), sume.end());
    for (int i = 0; i < 4; i++)
    {
        cout << sume[i] << " ";
    }
    return 0;
}