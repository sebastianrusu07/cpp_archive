#include <cmath>
#include <vector>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <iostream>
#include <list>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    string inputWord;
    vector<string> words;
    while (cin>>inputWord && inputWord!="imiplacesamananc")words.push_back(inputWord);
    for (auto word : words)
    {
        sort(word.begin(),word.end(),greater<char>());
        cout<<word<<endl;
    }
    return 0;
}