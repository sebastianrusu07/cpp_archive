#include <cmath>
#include <iomanip>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

string lefty = "qwertasdfgzxcvb";
string righty = "yuiophjklnm";

bool isLeft(char c)
{
    return lefty.find(c)!=string::npos;
}

int main()
{
    string word;
    cin >> word;
    for (int i=1;i<word.size();i++)
    {
        if (isLeft(word[i])==isLeft(word[i-1]))
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}

