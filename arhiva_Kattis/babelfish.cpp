#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_map<string,string> dictionary;
    string line;
    while (getline(cin, line) && line != "")
    {
        int separatorPos = line.find(' ');

        string translated=line.substr(0, separatorPos);
        string pig=line.substr(separatorPos+1);

        dictionary[pig]=translated;
    }

    string word;
    while (cin >> word)
    {
        cout << (dictionary.count(word)?dictionary[word]:"eh") << '\n';
    }
    return 0;
}