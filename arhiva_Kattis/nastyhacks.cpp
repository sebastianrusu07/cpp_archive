#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int without,with,price;
        cin >> without >> with >> price;

        int diff=with-without;
        if (diff>price)
        {
            cout << "advertise\n";
            continue;
        }
        if (diff==price)
        {
            cout << "does not matter\n";
            continue;
        }
        cout << "do not advertise\n";
    }
    return 0;
}