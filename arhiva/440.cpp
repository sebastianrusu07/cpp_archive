#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int cntZero = 0;
    for (int i = 5; i <= n; i*=5)
    {
        cntZero += n/i;
    }

    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    int cntDoi=cntZero,cntCinci=cntZero;
    for (int i = 2; i <= n; i+=2)
    {
        while (cntDoi && arr[i]%2==0)
        {
            cntDoi--;
            arr[i]/=2;
        }
    }

    for (int i = 5; i <= n; i+=5)
    {
        while (cntCinci && arr[i]%5==0)
        {
            cntCinci--;
            arr[i]/=5;
        }
    }

    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= arr[i]%10;
        ans %= 10;
    }

    cout << ans;
    return 0;
}