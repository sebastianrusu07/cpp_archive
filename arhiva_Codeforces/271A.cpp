#include <iostream>
using namespace std;

bool allUnique(int nr)
{
    string s = to_string(nr);
    if (s[0]==s[1] || s[0]==s[2] || s[0]==s[3] || s[1] ==  s[2] || s[1] == s[3] || s[2] ==  s[3])
    {
        return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int i=n+1;
    for (; !allUnique(i); i++){}
    cout << i;
    return 0;
}