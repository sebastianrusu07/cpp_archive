#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int temp=k;
    if (arr[k]==0)
    {
        while (arr[k]==0)
        {
            k--;
        }
        cout << k;
    }else
    {
        while (arr[temp]==arr[k])
        {
            temp++;
        }
        cout << temp-1;
    }
    return 0;
}