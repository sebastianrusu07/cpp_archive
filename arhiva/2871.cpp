#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("fulger.in");
ofstream cout("fulger.out");

int nrDigits(int nr)
{
    int cnt=0;
    while (nr){
        cnt++;
        nr/=10;
    }
    return cnt;
}

int complementaryDigit(int c)
{
    return 9-c;
}

int powll(int n,int exp)
{
    int nr=1;
    for (int i = 1; i < exp; i++)
    {
        nr*=n;
    }
    return nr;
}

int secretNumber(int nr)
{
    int len = nrDigits(nr) , newNr = 0;
    for (int i = 1; i <= len; i++)
    {
        int c = complementaryDigit(nr%10);
        newNr = newNr + c * powll(10,i);
        nr/=10;
    }
    return newNr;
}



int main()
{
    int n;
    cin >> n;

    int secretCodes[n];
    for (int i = 1; i <= n; i++)
    {
        int nr;
        cin >> nr;
        secretCodes[i] = secretNumber(nr);
    }

    int hasCement = 0;
    for (int i = 1; i <= n; i++)
    {
        if (secretCodes[i]%10 == 0 && secretCodes[i]/10%10 == 1)hasCement++;
        cout << secretCodes[i] << " ";
    }
    cout << "\n" << hasCement;
    return 0;
}