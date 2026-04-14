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

    vector<char> litere;
    for (int i=0;i<input.size();i++)
    {
        if (input[i] != ' ' && toupper(input[i])!=input[i])
        {
            auto locate = find(litere.begin(), litere.end(), input[i]);
            if (locate == litere.end())
            {
                litere.push_back(input[i]);
            }
        }
    }
    for (int i=0;i<litere.size();i++)
    {
        cout << litere[i] << " ";
    }
    return 0;
}