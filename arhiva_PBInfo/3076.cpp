#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int sumCif(int nr)
{
    int suma = 0;
    while (nr)
    {
        suma+=nr%10;
        nr/=10;
    }
    return suma;
}

int nrCif(int nr)
{
    int suma = 0;
    while (nr)
    {
        suma++;
        nr/=10;
    }
    return suma;
}

int main()
{
    int nr;
    cin >> nr;
    int length = nrCif(nr),digit=sumCif(nr);
    long long suma = 0;
    for (int i = 0; i < length; i++)
    {
        suma+=pow(10, i)*digit;
    }
    cout << suma;
    return 0;
}