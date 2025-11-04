#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int main()
{
    string nume,prenume;
    cin >> nume >> prenume;
    for (int i = 0;i<prenume.size();i++)
    {
        if (tolower(prenume[i])=='a' || tolower(prenume[i])=='e' || tolower(prenume[i])=='i' || tolower(prenume[i])=='o' || tolower(prenume[i])=='u')
        {
            prenume.erase(i,1);
            i--;
        }
    }
    cout << prenume << " " << nume;
    return 0;
}

