#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[3][n];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i=0;i<n;i++)
    {
        int minim = min(arr[0][i], min(arr[1][i],arr[2][i]));
        int maxim = max(arr[0][i], max(arr[1][i],arr[2][i]));
        int sum = arr[0][i] + arr[1][i] + arr[2][i];
        int med = sum - maxim - minim;
        cout << med << ' ';
    }
    return 0;
}