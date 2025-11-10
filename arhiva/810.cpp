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

bool hasLetterA(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'a')return true;
    }
    return false;
}

int main()
{
    vector<string> input;
    string word;
    while (cin >> word)input.push_back(word);

    int cnt=0;
    for (string it : input)
    {
        if (hasLetterA(it))cnt++;
    }
    cout << cnt;
    return 0;
}