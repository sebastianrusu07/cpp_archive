#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <iostream>
#include <thread>
using namespace std;

bool isConsonant(char c)
{
    c=tolower(c);
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return false;
    }
    return true;
}


int main()
{
    string s;
    getline(cin,s);
    for(int i=0;s[i]==' ';i++)
    {
        s.erase(i,1);
        i--;
    }
    for (int i=1;i<s.length();i++)
    {
        if (s[i-1]==' ' && s[i]==' ')
        {
            s.erase(i,1);
            i--;
        }
    }
    cout << s;
    return 0;
}
