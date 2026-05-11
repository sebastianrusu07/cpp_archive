#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n%2==0)
    {
        cout << "second";
    }else
    {
        cout << "first";
    }
    return 0;
}

