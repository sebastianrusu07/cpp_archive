#include <cmath>
#include <iostream>
using namespace std;

int nrCif(int nr)
{
    int suma = 0;
    while (nr)
    {
        nr/=10;
        suma++;
    }
    return suma;
}

int main()
{
    int n;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        int nr;
        cin >> nr;
        if (nrCif(nr)%2!=0)
        {
            cout << "NU";
            return 0;
        }
    }
    cout << "DA";
    return 0;
}