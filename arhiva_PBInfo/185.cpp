#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;

int primCif(int nr)
{
    while (nr>9)
    {
        nr/=10;
    }
    return nr;
}

int main()
{
    int n;
    cin >> n;
    vector<int> vector;
    for (int i=1; i<=n; i++)
    {
        int nr;
        cin >> nr;
        vector.push_back(primCif(nr));
    }
    sort(vector.begin(), vector.end());
    for (int i=0; i<vector.size(); i++)
    {
        cout << vector[i];
    }
    return 0;
}