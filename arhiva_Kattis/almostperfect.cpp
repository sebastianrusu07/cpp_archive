#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int divSum(int nr)
{
    int sum = 1;
    for (int i = 2; i*i <= nr; i++)
    {
        if (nr % i == 0)
        {
            sum += i;
            if (i!=nr/i) sum += (nr / i);
        }
    }
    return sum;
}

int main()
{
    int nr;
    while (cin >> nr){
        int sum = divSum(nr);
        if (sum==nr)
        {
            cout << nr << " perfect\n";
        }else if (abs(sum-nr)<=2)
        {
            cout << nr << " almost perfect\n";
        }else
        {
            cout << nr << " not perfect\n";
        }
    }
    return 0;
}