#include <iostream>
using namespace std;

int freq[4];

int main()
{
    string input;
    getline(cin, input);
    for (int i = 0; i<input.length(); i+=2)
    {
        freq[input[i]-'0']++;
    }

    if (freq[1]>0)
    {
        cout << 1;
        freq[1]--;
    }else
    {
        if (freq[2]>0)
        {
            cout << 2;
            freq[2]--;
        }else
        {
            cout << 3;
            freq[3]--;
        }
    }

    for (int i=0;i<freq[1];i++)
    {
        cout << "+1";
    }
    for (int i=0;i<freq[2];i++)
    {
        cout << "+2";
    }
    for (int i=0;i<freq[3];i++)
    {
        cout << "+3";
    }
    return 0;
}