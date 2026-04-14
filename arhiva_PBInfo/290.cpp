#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vector;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        if (nr%2 == 0)vector.push_back(nr);
    }
    for (int i = 1; i < vector.size(); i++)
    {
        int prev=vector[i-1];
        if (prev>=vector[i])
        {
            cout << "NU";
            return 0;
        }
    }
    cout << "DA";
    return 0;
}