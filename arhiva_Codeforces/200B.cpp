#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double sum = 0;
    for(int i=1; i<=n; i++)
    {
        double amount;
        cin >> amount;
        sum += amount;
    }
    cout << fixed << setprecision(5);
    cout << sum / n;
    return 0;
}