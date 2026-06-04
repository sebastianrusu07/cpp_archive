#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    cin >> s;

    s.erase(s.find('-'),1);

    int sum=0;
    int mult[10]={4,3,2,7,6,5,4,3,2,1};
    for (int i=0;i<s.length();i++)
    {
        sum+=(s[i]-'0') * mult[i];
    }
    cout << (sum%11==0?1:0);;
    return 0;
}