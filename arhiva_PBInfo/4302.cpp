#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

ifstream cin("status.in");
ofstream cout("status.out");

int main()
{
    int n;
    cin>>n;

    vector<char> typedLetters;
    for(int i=0;i<n;i++)
    {
        char letter;
        cin >> letter;
        if(!typedLetters.empty() && letter == typedLetters[typedLetters.size()-1])
        {
            typedLetters.pop_back();
        }else
        {
            typedLetters.push_back(letter);
        }
    }
    for(int i=0;i<typedLetters.size();i++)
    {
        cout<<typedLetters[i];
    }
    return 0;
}