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

int main()
{
    string s;
    getline(cin, s);

    string word;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            word += s[i];
        }else
        {
            if (word.size() == 3)
            {
                i-=3;
                s.erase(i,3);
                s.insert(i,"*");
            }
            word.clear();
        }
    }
    if (word.size() == 3)
    {
        s.erase(s.size()-3,3);
        s.insert(s.size(),"*");
    }
    cout << s;
    return 0;
}