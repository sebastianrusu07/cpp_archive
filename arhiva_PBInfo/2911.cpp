#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <algorithm>
using namespace std;

string nrOut(int c)
{
    string cifra = "";
    if (c==0)
    {
        cifra = "@@@@@\n@   @\n@   @\n@   @\n@@@@@\n";
    }
    if (c==1)
    {
        cifra = "  @  \n @@  \n  @  \n  @  \n@@@@@\n";
    }
    if (c==2)
    {
        cifra = "@@@@\n@  @\n  @  \n @   \n@@@@\n";
    }
    if (c==3)
    {
        cifra = "@@@@@\n    @\n@@@@@\n    @\n@@@@@\n";
    }
    if (c==4)
    {
        cifra = "@   @\n@   @\n@@@@@\n    @\n    @\n";
    }
    if (c==5)
    {
        cifra = "@@@@@\n@    \n@@@@@\n    @\n@@@@@\n";
    }
    if (c==6)
    {
        cifra = "@@@@@\n@    \n@@@@@\n@   @\n@@@@@\n";
    }
    if (c==7)
    {
        cifra = "@@@@\n   @ \n  @@@\n   @ \n   @ \n";
    }
    if (c==8)
    {
        cifra = "@@@@@\n@   @\n@@@@@\n@   @\n@@@@@\n";
    }
    if (c==9)
    {
        cifra = "@@@@@\n@   @\n@@@@@\n    @\n    @\n";
    }
    return cifra;
}

int main()
{
    long long nr;
    cin>>nr;
    string numar = to_string(nr);

    int cifre[numar.size()];
    for (int i = 0; i < numar.size(); i++)
    {
        int character = numar[i]-'0';
        cifre[i] = character;
    }
    for (int i = 0; i < numar.size(); i++)
    {
        int character = cifre[i];
        cout << nrOut(character) << endl << endl;
    }
    return 0;
}