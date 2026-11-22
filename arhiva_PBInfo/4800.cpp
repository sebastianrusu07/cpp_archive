#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool isPalindrome(const string& segment)
{
    string reversed = segment;
    reverse(reversed.begin(), reversed.end());
    return reversed == segment;
}

int main()
{
    string word;
    cin >> word;
    bool keepSearching = true;
    string ans = "";
    for (int len=word.length(); len>=1 && keepSearching; len--)
    {
        for (int i=0; i+len<=word.length(); i++)
        {
            string segment = word.substr(i, len);
            if (isPalindrome(segment) && (ans.empty() || isPalindrome(ans)))
            {
                ans = segment;
                keepSearching = false;
            }
        }
    }
    cout << ans;
    return 0;
}