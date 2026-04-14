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

bool areTheSame(char a, char b)
{
    return (tolower(a) == tolower(b));
}

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size()-1; i++)
    {
        if (areTheSame(s[i], s[i+1]))
        {
            int j=i+1;
            while (areTheSame(s[i], s[j]))
            {
                j++;
            }
            s.erase(i, j-i);
            i=-1;
        }
    }

    cout << s;
    return 0;
}