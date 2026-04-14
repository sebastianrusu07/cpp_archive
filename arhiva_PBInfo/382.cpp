#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int candidate1=(n/k)*k;
    int candidate2=(n/k+1)*k;
    if (abs(n-candidate1)==abs(n-candidate2))
    {
        cout << candidate1;
    }else
    {
        if (abs(n-candidate1) > abs(n-candidate2))
        {
            cout << candidate2;
        }else
        {
            cout << candidate1;
        }
    }
    return 0;
}