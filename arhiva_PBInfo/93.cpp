#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("cuvmax.in");
ofstream cout("cuvmax.out");

int nrCuvinte(string s)
{
    int counter=1;
    for (int i=1;i<s.length();i++)
    {
        if (s[i]==' ' && s[i-1]!=' ')counter++;
    }
    return counter;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    int maxCount=0;
    string culprit;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        if (nrCuvinte(s) > maxCount)
        {
            maxCount = nrCuvinte(s);
            culprit = s;
        }
    }
    cout << culprit;
    return 0;
}