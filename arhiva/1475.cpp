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

ifstream cin("numere14.in");
ofstream cout("numere14.out");

int main()
{
    int n;
    cin>>n;

    int suma=0;
    for(int i=0;i<n;i++)
    {
        string nr;
        cin >> nr;
        int c = nr[(nr.length())/2]-'0';
        if(c%2!=0)suma+=c;
    }

    cout<<suma;
    return 0;
}