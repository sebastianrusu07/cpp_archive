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

    int first=-1;
    for (int i = 1; i <= n; i++)
    {
        int time,on;
        cin >> time >> on;
        if (!on)
        {
            if (first == -1 || time < first)
            {
                first = time;
            }
        }
    }
    cout << first;
    return 0;
}