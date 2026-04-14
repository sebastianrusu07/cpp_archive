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

int main()
{
    string input;
    getline(cin, input);
    input.push_back(' ');

    vector<string> words;
    string tempWord;
    for (int i = 0; i < input.length(); i++) //autocomplete try not to spew out absolute bs challenge ( IMPOSSIBLE )
    {
        if (input[i] == ' ')
        {
            words.push_back(tempWord);
            tempWord.clear();
        }else
        {
            tempWord += input[i];
        }
    }

    int target;
    cin >> target;

    bool found = false;
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i].size() == target)
        {
            cout << words[i] << endl;
            found = true;
        }
    }

    if (!found)cout << "nu exista";
    return 0;
}