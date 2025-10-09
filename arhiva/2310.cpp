#include <cmath>
#include <algorithm>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>
#include <climits>
#include <unordered_set>
#include <list>
#include <unordered_map>
using namespace std;

ifstream cin("saci.in");
ofstream cout("saci.out");

bool sare(string nr)
{
    if (nr.length()<2)return true;
    for (int i=1;i<nr.length();i++)
    {
        int cif = nr[i]-'0';
        int prev = nr[i-1]-'0';
        if(cif<=prev)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int counter = 0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if (sare(s))
        {
            counter++;
        }
    }
    cout<<counter;

    cin.close();
    cout.close();

    return 0;
}



