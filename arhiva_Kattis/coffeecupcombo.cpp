#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int coffees=0,lectures=0;
    for (int i = 1; i <= n; i++)
    {
        char c;
        cin >> c;
        if (c=='1')
        {
            coffees=3;
        }
        if (coffees>0)
        {
            coffees--;
            lectures++;
        }
    }
    cout << lectures;
    return 0;
}