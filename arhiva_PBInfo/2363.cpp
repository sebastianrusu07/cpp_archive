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

ifstream cin("joc8.in");
ofstream cout("joc8.out");

bool isAlternant(int nr)
{
    string s = to_string(nr);
    if(s.length()%2==0)return false;
    for (int i=1;i<s.size()-1;i++)
    {
        if ( (s[i]>=s[i-1] && s[i]<=s[i+1]) || (s[i]<=s[i-1] && s[i]>=s[i+1]) )return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        if(isAlternant(nr))cnt++;
    }
    cout<<cnt;
    return 0;
}