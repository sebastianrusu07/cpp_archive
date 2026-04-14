#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;

int minCif(int nr)
{
    int mic = INT_MAX;
    while (nr)
    {
        if (nr%10<mic)
        {
            mic = nr%10;
        }
        nr/=10;
    }
    return mic;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int nrZero=0;

    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        if (minCif(nr))v.push_back(minCif(nr));
        else nrZero++;
    }
    sort(v.begin(),v.end());

    cout << v[0];
    for (int i = 1; i <= nrZero; i++)cout << "0";
    for (int i = 1; i < v.size(); i++)
    {
        cout << v[i];
    }
    return 0;
}