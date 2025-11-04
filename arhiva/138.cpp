#include <cmath>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <climits>
#include <list>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    unordered_map<char,int> map;
    for (int i=0;i<input.size();i++)
    {
        if (input[i] != ' ' && toupper(input[i])!=input[i])
        {
            map[input[i]]++;
        }
    }
    int maxC=0;
    char culprit;
    for (auto it : map)
    {
        if (it.second>=maxC)
        {
            if (it.second==maxC)
            {
                culprit=char(min(int(culprit),int(it.first)));
            }else
            {
                culprit=it.first;
                maxC=it.second;
            }
        }
    }
    cout << culprit;
    return 0;
}