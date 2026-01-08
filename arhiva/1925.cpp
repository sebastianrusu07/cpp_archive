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

ifstream cin("numar9.in");
ofstream cout("numar9.out");

int main()
{
    int s,k;
    cin >> s >> k;

    int nines=s/9;
    int rest = s%9;
    string nr = string(nines, '9');
    if (rest)nr=to_string(rest)+nr;
    cout << nr << '\n';

    rest%=k;
    for (int i=0;i<nines;i++)
    {
        rest=(rest*10+9)%k;
    }
    cout << rest;
    return 0;
}