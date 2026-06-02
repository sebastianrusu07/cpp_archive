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
    }

    sort(arr, arr + n);
    reverse(arr, arr + n);

    int time=0;
    for (int i = 0; i < n; i++)
    {
        int willFinish=arr[i]+i+1;
        time=max(time,willFinish);
    }
    cout << time+1;
    return 0;
}