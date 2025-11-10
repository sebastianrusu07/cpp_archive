#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
using namespace std;

string palindrome(string s)
{
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    vector<string> input;
    string word;
    while (cin>>word)input.push_back(word);
    for(int i=0;i<input.size();i++)
    {
        cout<<input[i] << " " << palindrome(input[i]) << " ";
    }
    return 0;
}