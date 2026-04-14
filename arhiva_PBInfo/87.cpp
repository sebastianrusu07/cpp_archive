#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("lgmax.in");
ofstream cout("lgmax.out");

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    string maxS;
    for(int i=0;i<n;i++)
    {
        string s;
        getline(cin,s);
        if (maxS.length()<s.length())
        {
            maxS=s;
        }
    }
    cout<<maxS;
    return 0;
}