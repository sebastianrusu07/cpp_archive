#include <iostream>
using namespace std;

int main()
{
    int junk;
    cin >> junk;
    string s;
    cin >> s;

    int danik=0,anton=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'D')
        {
            danik++;
        }else
        {
            anton++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton";
    }else
    {
        if (anton < danik)
        {
            cout << "Danik";
        }else
        {
            cout << "Friendship";
        }
    }
    return 0;
}