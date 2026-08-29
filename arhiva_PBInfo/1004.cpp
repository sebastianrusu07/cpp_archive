#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("eureni.in");
ofstream cout("eureni.out");

int powi(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{
    int balance,currentPower,base;
    cin >> balance >> currentPower >> base;

    int totalBillsUsed = 0;
    while (balance)
    {
        for (int i=currentPower;i>=0;i--)
        {
            int billsUsed=0,billWorth=powi(base,i);
            while (balance - billWorth >= 0)
            {
                balance -= billWorth;
                billsUsed++;
                totalBillsUsed++;
            }
            if (billsUsed > 0)
            {
                cout << billWorth << " " << billsUsed << '\n';
            }
        }
    }
    cout << totalBillsUsed;
    return 0;
}