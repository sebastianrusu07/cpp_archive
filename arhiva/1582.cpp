#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
using namespace std;

int sumCif(int nr)
{
    int suma=0;
    while (nr)
    {
        suma+=nr%10;
        nr/=10;
    }
    return suma;
}

int main()
{
    int n;
    cin >> n;
    int maxSuma=INT_MIN, minSuma=INT_MAX,minNr=0,maxNr=0;
    for (int i = 0; i < n; i++)
    {
        int nr;
        cin >> nr;
        if (sumCif(nr) > maxSuma)
        {
            maxSuma = sumCif(nr);
            maxNr = nr;
        }
        if (sumCif(nr) < minSuma)
        {
            minSuma = sumCif(nr);
            minNr = nr;
        }
    }
    cout << minNr << endl << maxNr;
    return 0;
}