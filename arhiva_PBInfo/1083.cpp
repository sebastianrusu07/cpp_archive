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

ifstream cin("sir5.in");
ofstream cout("sir5.out");

int cerinta1(int k)
{
    int termen = 0 , sumaTermeni = 0;
    for (int i = 1; i <= k; i++)
    {
        termen += i;
        sumaTermeni += termen;
    }
    return sumaTermeni%10;
}

int cerinta2(int x)
{
    string nr = to_string(x);
    if (nr[nr.length() - 1]-'0' == nr.length() - 1)
    {
        string next = "";
        for (int i = 1; i <= nr.length()+1; i++)
        {
            next+=to_string(i);
        }
        return stoi(next);
    }
    nr+=nr[0];
    nr.erase(0,1);
    return stoi(nr);
}

int cerinta3(int a,int b)
{
    if (b<a)return 0;
    return b-a;
}

int main()
{
    int k,x,a,b;
    cin>>k>>x>>a>>b;
    cout<<cerinta1(k)<<'\n'<<cerinta2(x)<<'\n'<<cerinta3(a,b);
    return 0;
}