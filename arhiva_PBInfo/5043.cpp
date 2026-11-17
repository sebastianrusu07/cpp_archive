#include <fstream>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int letterTotalAppearances[127];

int main()
{
    string input;
    cin>>input;

    for (char c : input)
    {
        letterTotalAppearances[c]++;
    }

    unordered_map<char,int> currentAppearances;
    cout << "0 ";
    for (int idx=0; idx<input.length(); idx++)
    {
        currentAppearances[input[idx]]++;
        if (currentAppearances[input[idx]] == letterTotalAppearances[input[idx]])
        {
            currentAppearances.erase(input[idx]);
        }
        if (currentAppearances.empty() && idx!=input.length()-1)
        {
            cout << idx+1 << ' ';
        }
    }
    return 0;
}