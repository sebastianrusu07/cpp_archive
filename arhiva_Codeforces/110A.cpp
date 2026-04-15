#include <iostream>
using namespace std;

int main()
{
    long long nr;
    cin >> nr;

    int luckydigits=0;
    while (nr)
    {
        int c=nr%10;
        if (c==7 || c==4)
        {
            luckydigits++;
        }
        nr/=10;
    }
    if (luckydigits==4 || luckydigits==7)
    {
        cout << "YES";
    }else
    {
        cout << "NO";
    }
    return 0;
}