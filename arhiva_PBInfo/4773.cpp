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

ifstream cin("specialmax.in");
ofstream cout("specialmax.out");

int firstTwoDigits(int nr)
{
    while (nr>99)
    {
        nr/=10;
    }
    return nr;
}

bool isSpecial(int nr)
{
    int sumOdd=0,sumEven=0;
    while (nr)
    {
        int c = nr%10;
        if (c%2==0)sumEven+=c;
        else sumOdd+=c;
        nr/=10;
    }
    if (sumEven>sumOdd)return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    int maxSpecial=0;
    for (int i=1; i<=n/2; i++)
    {
        int a,b;
        cin >> a >> b;
        int nr = (a%100)*100 + firstTwoDigits(b);
        if (isSpecial(nr))maxSpecial = max(maxSpecial,nr);
    }
    cout << maxSpecial;
    return 0;
}