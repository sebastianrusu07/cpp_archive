#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool couldHaveBeenModified(string from,string into)
{
    int pos=0;
    for(int i=0;i<into.length();i++)
    {
        if(into[i]==from[pos])
        {
            pos++;
            if (pos==from.length())
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string normal,infected;
    cin>>normal>>infected;

    if (couldHaveBeenModified(normal,infected))
    {
        cout << "Ja";
    }else
    {
        cout << "Nej";
    }
    return 0;
}