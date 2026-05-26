#include <iostream>
#include <fstream>
using namespace std;

ifstream fileIn("20k.txt");

int main()
{
    vector<string> words;
    string word;
    while (fileIn >> word)
    {
        words.push_back(word);
    }

    while (true)
    {
        string pair;
        cin >> pair;
        for (auto it : words)
        {
            if (it.find(pair)!=string::npos)
            {
                cout << it << endl;
                auto pos = find(words.begin(), words.end(), it);
                words.erase(pos);
                break;
            }
        }
    }
    return 0;
}