#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <fstream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("baza.in");
ofstream cout("baza.out");

int main()
{
    string s;
    cin >> s;

    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        v.push_back(s[i] - 'a');
    }

    vector<int > res(100);
    for (int i = 0; i < 100; i++)
    {
        res[i]=0;
    }

    for (int i = 0; i < v.size(); i++)
    {
        int t=v[i];
        for (int j = 0; j < res.size(); j++)
        {
            t=res[j]*26+t;
            res[j]=t%10;
            t/=10;
        }
    }

    reverse(res.begin(), res.end());

    int i=0;
    while (res[i]==0)
    {
        i++;
    }
    for (; i < res.size(); i++)
    {
        cout << res[i];
    }
    return 0;
}