#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

ifstream cin("x3.in");
ofstream cout("x3.out");

int main()
{
    int n;
    cin >> n;

    vector<int> previousNumbers(n);
    for (int i=0;i<n;i++)
    {
        cin >> previousNumbers[i];
    }

    long long ones=0,zeros=0;
    long long sum=0;
    for (int i=0;i<31;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (previousNumbers[j] & ( 1LL << i))
            {
                ones++;
            }else
            {
                zeros++;
            }
        }
        sum+=ones*zeros*(1LL << i); // ^_^
        zeros=0;
        ones=0;
    }
    cout << sum;
    return 0;
}