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

bool isNumber(string word)
{
    int first = word[0]-'0';
    if (first <=9 && first >=0)return true;
    return false;
}

int main()
{
    vector<string> input;
    string word;
    while (cin >> word)input.push_back(word);

    int culprit = -1,maxFirstDigit=0;
    for (int i = 0; i < input.size(); i++)
    {
        string it = input[i];
        if (isNumber(it))
        {
            int digit = it[0]-'0';
            if (digit > maxFirstDigit)
            {
                maxFirstDigit = digit;
                culprit = stoi(it);
            }
        }
    }
    if (culprit == -1)cout << "nu exista";
    else cout << culprit;
    return 0;
}