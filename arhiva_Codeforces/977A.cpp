#include <iostream>
using namespace std;

int main()
{
    int nr,k;
    cin >> nr >> k;
    for (int i = 1; i <= k; i++)
    {
        if (nr%10==0)
        {
            nr/=10;
        }else
        {
            nr--;
        }
    }
    cout << nr;
    return 0;
}