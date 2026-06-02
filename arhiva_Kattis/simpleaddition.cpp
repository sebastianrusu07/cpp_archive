#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main()
{
    string a,b;
    cin >> a >> b;

    while (a.size()<b.size()) a.insert(0,"0");
    while (b.size()<a.size()) b.insert(0,"0");

    vector<int> aDigits,bDigits;
    for(int i=0;i<a.size();i++)
    {
        aDigits.push_back(a[i]-'0');
    }
    for(int i=0;i<b.size();i++)
    {
        bDigits.push_back(b[i]-'0');
    }

    int len = b.size(),carry=0;
    for(int i=len-1;i>=0;i--)
    {
        int sum=aDigits[i]+bDigits[i]+carry;
        aDigits[i]=sum%10;
        carry=sum/10;
    }
    if(carry)
    {
        aDigits.insert(aDigits.begin(),carry);
    }
    for(int i=0;i<aDigits.size();i++)
    {
        cout << aDigits[i];
    }
    return 0;
}