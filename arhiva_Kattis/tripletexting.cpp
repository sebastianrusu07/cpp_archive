#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int main()
{
    string input;
    cin >> input;

    int len = input.length()/3;
    string word1 = input.substr(0, len);
    string word2 = input.substr(len, len);
    string word3 = input.substr(2*len, len);

    if(word1 == word2 || word1 == word3)
    {
        cout << word1;
        return 0;
    }
    if(word2 == word3 || word2 == word1)
    {
        cout << word2;
        return 0;
    }
    cout << word3;
    return 0;
}