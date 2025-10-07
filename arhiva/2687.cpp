#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> vector(n);
    for (int i = 0; i < n; i++)
    {
        string nr;
        cin >> nr;
        vector[i] = nr;
    }
    for (int i = 0; i < n-1; i++)
    {
        if (vector[i][vector[i].length()-1] == vector[i+1][0])
        {
            cout << vector[i] << " " << vector[i+1] << endl ;
        }
    }
    return 0;
}