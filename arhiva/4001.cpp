#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <climits>
#include <unordered_map>
using namespace std;

int main()
{
    int k,nr;
    cin >> k;
    int maxK=INT_MIN,minK=INT_MAX,indexMin=0,indexMax=0,counter=1;
    bool AcestBoolValoreaza10Puncte = false;
    while (cin >> nr && nr!=0)
    {
        if (nr%10==k)
        {
            AcestBoolValoreaza10Puncte = true;
            if (nr>maxK)
            {
                maxK=nr;
                indexMax=counter;
            }
            if (nr<minK)
            {
                minK=nr;
                indexMin=counter;
            }

        }
        counter++;
    }
    if (AcestBoolValoreaza10Puncte)
    {
        cout << abs(indexMax-indexMin)+1;
    }else
    {
        cout << "NU EXISTA";
    }
    return 0;
}