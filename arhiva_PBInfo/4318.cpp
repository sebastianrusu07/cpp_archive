#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <climits>
#include <unordered_map>
using namespace std;

int nrCif(int nr)
{
    int suma = 0;
    if (nr==0) return 1;
    while (nr)
    {
        suma++;
        nr/=10;
    }
    return suma;
}

int main()
{
    int n;
    cin >> n;
    int counter=0;
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        if (nrCif(nr)%2!=0)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}