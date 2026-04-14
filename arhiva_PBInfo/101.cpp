#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

ifstream cin("sortcuv.in");
ofstream cout("sortcuv.out");

int main()
{
    string word;

    vector<string> words;
    while (cin>>word && word!="endingWord")words.push_back(word);
    sort(words.begin(), words.end());
    for (int i = 0;i < words.size();i++)
    {
        cout<<words[i]<<endl;
    }
    return 0;
}