#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

typedef struct transformation{
    int x,y;
};

bool isBackAtOriginal(string s,vector<int> cifre)
{
    for (int i=0;i<cifre.size();i++)
    {
        if (cifre[i]!=s[i]-'0')return false;
    }
    return true;
}

int numberOfTransformationsTillRepetition(vector<int> cifre,vector<transformation> pozitii,int t,int m,string org)
{
    int k=0;
    do
    {
        for (int j=0;j<m;j++)
        {
            swap(cifre[pozitii[j].x-1],cifre[pozitii[j].y-1]);
        }
        k++;
    }
    while (!isBackAtOriginal(org,cifre));
    return k;
}
int main()
{
    int nr,t,m;
    cin >> nr >> t >> m;

    string s = to_string(nr);
    vector<int> cifre(s.length());
    for(int i = 0; i < s.length(); i++)
    {
        cifre[i] = s[i] - '0';
    }

    vector<transformation> pozitii(m);
    for (int i=0;i<m;i++)
    {
        cin >> pozitii[i].x >> pozitii[i].y;
    }

    int k=numberOfTransformationsTillRepetition(cifre,pozitii,t,m,s);

    for (int i=0;i<t%k;i++)
    {
        for (int j=0;j<m;j++)
        {
            swap(cifre[pozitii[j].x-1],cifre[pozitii[j].y-1]);
        }
    }

    int result = 0;
    for (int i=0;i<cifre.size();i++)
    {
        result = (result*10) + cifre[i];
    }

    cout << result;
    return 0;
}
