#include <cmath>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

bool cifDis(int nr)
{
    int cif[10]={0};
    while (nr)
    {
        int digit = nr % 10;
        if (cif[digit] == 0)
        {
            cif[digit] = 1;
        }else
        {
            return false;
        }
        nr /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int nr;
        cin >> nr;
        if (!cifDis(nr))
        {
            cout << "NU";
            return 0;
        }
    }
    cout << "DA";
    return 0;
}