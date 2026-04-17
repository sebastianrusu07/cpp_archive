#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int p;
    cin >> p;

    string s;
    cin >> s;

    int len=s.length()-p+1;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (i<=j && j<i+p) continue;
            cout << s[j];
        }
        cout << '\n';
    }
    return 0;
}