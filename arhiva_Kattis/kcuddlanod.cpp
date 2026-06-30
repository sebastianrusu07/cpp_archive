#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <climits>
#include <queue>
#include <algorithm>
#include <set>
#include <ctime>
using namespace std;

string realNumber(string nr)
{
    reverse(nr.begin(), nr.end());
    for (int i = 0; i < nr.length(); i++)
    {
        if (nr[i]=='5') nr[i]='2';
        else if (nr[i]=='2') nr[i]='5';
    }
    return nr;
}

int main()
{
    string a,b;
    cin>>a>>b;

    a=realNumber(a);
    b=realNumber(b);

    int intA=stoi(a),intB=stoi(b);

    if (intA>intB)
    {
        cout << 1;
    }else
    {
        cout << 2;
    }
    return 0;
}