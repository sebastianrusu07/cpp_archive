#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <unordered_map>
#include <list>
using namespace std;

int main()
{
    string sir;
    getline(cin,sir);
    bool AcestBoolValoreaza30DePunctePfuaiDeCapulMeu = false;
    for (int i=0;i<sir.length();i++)
    {
        if(sir[i]=='a' || sir[i]=='e' || sir[i]=='i' || sir[i]=='o' || sir[i]=='u')
        {
            sir.insert(i+1,"*");
            i++;
            AcestBoolValoreaza30DePunctePfuaiDeCapulMeu=true;
        }
    }
    if (!AcestBoolValoreaza30DePunctePfuaiDeCapulMeu)cout << "FARA VOCALE";
    else cout << sir;
    return 0;
}