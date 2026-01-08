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

ifstream cin("inventie.in");
ofstream cout("inventie.out");

string minim(string a,string b)
{
    if (a.size()<b.size()) return a;
    if (a.size()>b.size()) return b;
    return (a<b)? a : b;
}

string maxim(string a,string b)
{
    if (a.size()<b.size()) return b;
    if (a.size()>b.size()) return a;
    return (a>b)? a : b;
}

int main()
{
    int n;
    cin >> n;

    string vMin="",vMax="";
    for(int i=0; i<n; i++)
    {
        long long a,b;
        cin >> a >> b;

        string smile = ( a!=b ? to_string(abs(a-b)) + to_string(a+b) : to_string(a+b) );
        cout << smile << endl;



        if ((a+b)%2!=0)
        {
            if (vMin.empty())
            {
                vMin = smile;
                vMax = smile;
            }else
            {
                vMin = minim(vMin,smile);
                vMax = maxim(vMax,smile);
            }
        }
    }
    if (vMin.empty())cout << 0;
    else cout << vMin << endl << vMax;
    return 0;
}