#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

ifstream cin("vocmax.in");
ofstream cout("vocmax.out");

int nrVocale(string s)
{
    int counter = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')counter++;
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
        if (nrVocale(s) > maxCount)
        {
            maxCount = nrVocale(s);
            culprit = s;
        }
    }
    cout << culprit;
    return 0;
}