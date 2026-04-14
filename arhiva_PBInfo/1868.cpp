#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <fstream>
#include <thread>
#include <cctype>
using namespace std;

ifstream cin("prosirx.in");
ofstream cout("prosirx.out");

bool isConsonant(char c)
{
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return false;
    }
    return true;
}

int main()
{
    string text;
    getline(cin, text);

    string modifiedText1;
    int cnt=0;
    vector<string> words;
    string word;
    for (int i=0;i<text.size(); i++)
    {
        if (isConsonant(text[i]) && text[i]!=' ') cnt++;
        if (isalpha(text[i]) && (i==0 || text[i-1]==' '))
        {
            modifiedText1.push_back('X');
        }else
        {
            modifiedText1.push_back(text[i]);
        }

        if (text[i]!=' ')
        {
            word.push_back(text[i]);
        }else
        {
            if (!word.empty()) words.push_back(word);
            word.clear();
        }
    }
    words.push_back(word);
    sort(words.begin(), words.end());
    cout << cnt << '\n' << modifiedText1 << '\n';
    for (int i=0;i<words.size();i++)
    {
        if (!words[i].empty()) cout << words[i] << ' ';
    }
    return 0;
}