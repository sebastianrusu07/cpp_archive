#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
using namespace std;

bool isPerfect(int n)
{
    return int(sqrt(n))*int(sqrt(n))==n;
}

bool isOdd(int n)
{
    return n % 2 == 1;
}

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int nr;
        cin >> nr;

        bool ok1=false,ok2=false;
        if(isPerfect(nr)) ok1=true;
        if(isOdd(nr)) ok2=true;

        if (ok1 && ok2)
        {
            cout << "OS\n";
            continue;
        }

        if (ok1)
        {
            cout << "S\n";
            continue;
        }

        if (ok2)
        {
            cout << "O\n";
            continue;
        }

        cout << "EMPTY\n";
    }
    return 0;
}