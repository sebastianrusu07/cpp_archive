#include <iostream>
#include <string>
#include <iomanip>
#include <unordered_map>
#include <vector>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <algorithm>
#include <set>
using namespace std;

int freq[26];

int main()
{
    string input;
    cin >> input;

    for(int i = 0; i < input.length(); i++)
    {
        freq[input[i]-'a']++;
    }

    int lettersToRemove=0;
    bool oneOdd=false;
    for(int i = 0; i < 26; i++)
    {
        if (freq[i]%2!=0)
        {
            if(!oneOdd)
            {
                oneOdd=true;
            }else
            {
                lettersToRemove++;
            }
        }
    }
    cout<<lettersToRemove;
    return 0;
}