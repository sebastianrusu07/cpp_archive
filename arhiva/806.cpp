#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n>1)
    {
        cout << n << " ";
        if (n%2==0)n--;
        else n=(n+1)/2;
    }
    cout << "1";
    return 0;
}