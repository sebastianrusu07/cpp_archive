#include <iostream>
using namespace std;

bool isLower(char c)
{
    if (tolower(c) == c)
    {
        return true;
    }
    return false;
}

int main()
{
    string input;
    cin >> input;

    int lc=0,uc=0;
    for (int i = 0; i<input.size(); i++)
    {
        char c = input[i];
        if (isLower(c))
        {
            lc++;
        }else
        {
            uc++;
        }
    }
    if (uc>lc)
    {
        for (int i = 0; i<input.size(); i++)
        {
            char c = toupper(input[i]);
            cout << c;
        }
    }else
    {
        for (int i = 0; i<input.size(); i++)
        {
            char c = tolower(input[i]);
            cout << c;
        }
    }
    return 0;
}