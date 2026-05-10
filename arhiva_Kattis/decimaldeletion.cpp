#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    double n;
    cin >> n;
    if (int(n*10)%10>=5)
    {
        n++;
    }
    n=int(n);
    cout << n;
    return 0;
}

