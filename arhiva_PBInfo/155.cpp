#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    unordered_map<int,int> digits;
    for (int i=0;i<input.length();i++)
    {
        int trueDigit=input[i]-'0'; //int form
        if (trueDigit <= 9 && trueDigit >= 0)digits[trueDigit]++;
    }

    int maxFreq=0,culprit=-1;
    for (auto it:digits)
    {
        if (it.second >= maxFreq)
        {
            if (it.second > maxFreq)
            {
                culprit=it.first;
                maxFreq=it.second;
            }else
            {
                culprit=min(culprit,it.first);
            }
        }
    }
    if (culprit == -1)cout << "NU";
    else cout << culprit;
    return 0;
}
