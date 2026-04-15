#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int previous = -1,changes=0;
    for (int i=1; i<=n; i++)
    {
        int magnet;
        cin >> magnet;

        if (previous == -1)
        {
            previous = magnet;
        }

        if (previous != magnet)
        {
            changes++;
            previous = magnet;
        }
    }
    cout << changes+1;
    return 0;
}