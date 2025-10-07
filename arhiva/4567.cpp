#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_set>
using namespace std;

bool isRotund(string nr)
{
    int par = (nr.length()%2==0)?0:1;
    string first=nr.substr(0,nr.length()/2);
    string second=nr.substr(nr.length()/2+par,nr.length()/2);
    if (first==second)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    for (int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        if (isRotund(s))
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}