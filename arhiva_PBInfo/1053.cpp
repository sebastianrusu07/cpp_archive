#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <fstream>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("cladiri.in");
ofstream cout("cladiri.out");

int maxCif(int nr)
{
    int m = 0;
    while (nr)
    {
        m=max(nr%10,m);
        nr/=10;
    }
    return m;
}

bool isPalindrome(int n)
{
    string s = to_string(n);
    string temp = s;
    reverse(temp.begin(),temp.end());
    return s == temp;
}

int missingBlocks(int n)
{
    string s = to_string(n);
    int st=0,dr=s.length()-1;
    int suma=0;
    while(st<dr)
    {
        suma+=abs(s[st]-s[dr]);
        st++;
        dr--;
    }
    return suma;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int nr;
        cin>>nr;
        v.push_back(nr);
    }

    int cMax=0,app=0;
    for(auto x : v)
    {
        int c = maxCif(x);
        if (c>cMax)
        {
            cMax = c;
            app = 1;
        }else
        {
            if (c==cMax)
            {
                app++;
            }
        }
    }
    cout << cMax << ' ' << app << endl;

    int cnt=0;
    for(auto x : v)
    {
        if (isPalindrome(x))
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    int blocks=0;
    for(auto x : v)
    {
        blocks+=missingBlocks(x);
    }
    cout << blocks << endl;
    return 0;
}
