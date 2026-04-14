#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;

int sumDiv(int nr)
{
    int suma = 0;
    for (int i=1;i*i<=nr;i++)
    {
        if(nr%i==0)
        {
            suma+=i+nr/i;
            if (i*i==nr)
            {
                suma-=i;
            }
        }
    }
    return suma;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> vector;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin >> nr;
        vector.push_back(make_pair(sumDiv(nr),nr));
    }
    sort(vector.begin(),vector.end());
    for(int i=0;i<vector.size();i++)
    {
        cout << vector[i].second << " ";
    }
    return 0;
}