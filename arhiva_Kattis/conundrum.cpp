#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string compare;
    for(int i = 0; i < s.length()/3; i++)
    {
        compare+="PER";
    }
    int cnt=0;
    for(int i = 0; i < s.size(); i++)
    {
        if (s[i]!=compare[i])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}