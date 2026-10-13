#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int numbers[100005];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    int mid = n/2;
    if (n % 2 == 0)
    {
        for (int i=0; i<mid; i++)
        {
            cout << numbers[mid+i] << ' ' << numbers[mid-i-1] << ' ';
        }
    }else
    {
        cout << numbers[mid] << ' ';
        for (int i=0; i<mid; i++)
        {
            cout << numbers[mid+i+1] << ' ' << numbers[mid-i-1] << ' ';
        }
    }
    return 0;
}