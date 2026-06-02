#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n],totalSum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totalSum += arr[i];
    }

    sort(arr, arr + n);
    reverse(arr, arr + n);

    int partialSum=0;
    for (int i=2;i<n;i+=3)
    {
        partialSum+=arr[i];
    }

    cout << totalSum - partialSum;
    return 0;
}