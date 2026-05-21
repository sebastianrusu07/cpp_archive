#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_map>
#include <climits>
#include <vector>
using namespace std;

int main(){
    string forbiddenLetters;
    cin>>forbiddenLetters;
    vector<char> letters;
    for(int i=0;i<forbiddenLetters.size();i++)
    {
        letters.push_back(forbiddenLetters[i]);
    }

    string input;
    while (cin>>input)
    {
        bool ok=true;
        for (int i=0;i<letters.size();i++)
        {
            if (input.find(letters[i])!=string::npos)
            {
                string censored(input.size(),'*');
                cout << censored << ' ';
                ok=false;
                break;
            }
        }
        if (ok)
        {
            cout << input << ' ';
        }
    }
    return 0;
}