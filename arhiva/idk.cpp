#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool isPalindrome(string nr)
{
    string temp=nr;
    reverse(temp.begin(),temp.end());
    return temp==nr;
}

int main()
{
    int n;
    cin >> n;

    int t=1,maxSpecialNr=8;
    int nr=t*t*t;
    while (nr<=n)
    {
        if (isPalindrome(to_string(nr)))
        {
            maxSpecialNr=nr;
        }
        t++;
        nr=t*t*t;
    }
    cout << maxSpecialNr;
    return 0;
}