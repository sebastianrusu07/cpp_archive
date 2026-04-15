#include <iostream>
using namespace std;

int main()
{
    int lil,big;
    cin >> lil >> big;

    int cnt=0;
    while (lil <= big)
    {
        lil *= 3;
        big *= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}