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
using namespace std;

ifstream cin("textcuv.in");
ofstream cout("textcuv.out");

bool hasIni(string word)
{
    for (int i = 0; i < word.length()-2; i++)
    {
        if (word[i]=='i' && word[i+1]=='n' && word[i+2]=='i')
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    string s;
    cin >> t >> ws;
    getline(cin, s);

    string word;
    vector<string> words;
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            word += s[i];
        }else
        {
            if (!word.empty())
            {
                words.push_back(word);
                word.clear();
            }
        }
    }
    if (!word.empty()) words.push_back(word);

    if (t==1)
    {
        cout << words.size() << endl;
        for (auto it : words)
        {
            cout << it << endl;
        }
        return 0;
    }

    if (t==2)
    {
        sort(words.begin(), words.end());
        cout << words[0];
        return 0;
    }

    if (t==3)
    {
        int cnt=0;
        for (auto it : words)
        {
            if (hasIni(it))
            {
                cnt++;
            }
        }
        cout << cnt;
        return 0;
    }

    if (t==4)
    {
        for (auto it : words)
        {
            reverse(it.begin(), it.end());
            cout << it << endl;
        }
        return 0;
    }

    if (t==5)
    {
        int cnt=0;
        for (auto it : words)
        {
            if (it[it.length()-1] == 'a')
            {
                cnt++;
            }
        }
        cout << cnt;
        return 0;
    }

    int maxLength=0,minLength=1337;
    for (auto it : words)
    {
        maxLength=max(maxLength,int(it.size()));
        minLength=min(minLength,int(it.size()));
    }
    cout << minLength << ' ' << maxLength;
    return 0;
}