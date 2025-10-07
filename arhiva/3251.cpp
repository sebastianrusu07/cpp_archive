#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <unordered_set>
using namespace std;

int isPalindrome(string x)
{
    string pali = x;
    reverse(pali.begin(), pali.end());
    if (pali == x)
    {
        return 1;
    }
    return 0;
}

string associate(int y)
{
    string newnr = "";
    if (y==0)
    {
        return "0";
    }
    while(y)
    {
        if ((y%10)%2==0)
        {
            newnr.insert(0,to_string(y%10));
        }
        y/=10;
    }
    if(newnr.empty())
    {
        newnr="19";
    }
    return to_string(stoll(newnr));
}

int main()
{
    int n;
    cin >> n;
    int counter=0;
    for (int i=1; i<=n; i++)
    {
        int nr;
        cin >> nr;
        string assoc = associate(nr);
        if (!assoc.empty() && isPalindrome(assoc))
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}