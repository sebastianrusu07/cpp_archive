#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
using namespace std;

ifstream cin("pbinfo.in");
ofstream cout("pbinfo.out");

int main()
{
    string input;
    cin >> input;

    int n;
    cin >> n;
    vector<string> keywords(n);
    keywords.push_back("virus");
    for (int i = 0; i < n; i++)
    {
        cin >> keywords[i];
    }

    vector<string> linkWords;
    string tempWord;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ',' || input[i] == '.' || input[i] == '!' || input[i] == '?' || input[i] == ':' || input[i] == '/')
        {
            linkWords.push_back(tempWord);
            tempWord.clear();
        }else
        {
            tempWord += input[i];
        }
    }
    for (string word : keywords)
    {
        if (find(linkWords.begin(), linkWords.end(), word) != linkWords.end())
        {
            cout << "DA";
            return 0;
        }
    }
    cout << "NU";
    return 0;
}